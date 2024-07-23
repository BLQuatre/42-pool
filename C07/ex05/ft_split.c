/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:51:13 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/23 02:12:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_sep(char c, char *str)
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

int	ft_strlen_nextsep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && (!ft_check_sep(str[i], charset)))
		i++;
	return (i);
}

int	ft_countwords(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_check_sep(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !ft_check_sep(str[i], charset))
			i++;
	}
	return (count);
}

char	*ft_strndup(char *str, int n)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *) malloc(sizeof(char) * (n + 1));
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char **) malloc(sizeof (char *) * (ft_countwords(str, charset) + 1));
	if (!tab)
		return (0);
	while (*str != '\0')
	{
		while (*str != '\0' && ft_check_sep(*str, charset))
			str++;
		if (*str != '\0')
		{
			tab[i] = ft_strndup(str, ft_strlen_nextsep(str, charset));
			i++;
		}
		while (*str != '\0' && !ft_check_sep(*str, charset))
			str++;
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
	char	**tab = ft_split(argv[1], argv[2]);
	int 	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
*/
