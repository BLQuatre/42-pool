/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:51:13 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/18 17:27:55 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	ft_charstr(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_nextsep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && (!ft_charstr(str[i], charset)))
		i++;
	return (i);
}

int	ft_countwords(char *str, char *charset)
{
	int	i;
	int	flag;
	int	count;

	i = 0;
	count = 0;
	flag = 1;
	while (str[i])
	{
		if (ft_charstr(str[i], charset))
		{
			flag = 1;
		}
		else
		{
			if (flag == 1)
				count++;
			flag = 0;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	char	*tmpstr;
	int		i;
	int		nextsep;
	int		wordc;

	i = 0;
	nextsep = 0;
	tmpstr = str;
	wordc = ft_countwords(str, charset);
	tab = (char **) malloc(sizeof (char *) * (wordc + 1));
	if (!tab)
		return (0);
	while (i < wordc)
	{
		nextsep = ft_nextsep(tmpstr, charset);
		tab[i] = (char *) malloc(sizeof(char) * (nextsep + 1));
		ft_strncpy(tab[i], tmpstr, nextsep);
		tmpstr += (nextsep + 1);
		while (ft_charstr(*tmpstr, charset) && *tmpstr)
			tmpstr++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);
	printf("%d\n", ft_countwords(argv[1], argv[2]));
	char	**tab = ft_split(argv[1], argv[2]);
	int 	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
*/
