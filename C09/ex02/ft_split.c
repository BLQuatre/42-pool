/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:51:13 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/18 14:06:17 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


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
		if (ft_charinstr(str[i], charset))
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
	int	i;
	char	flag;
	

	*tab = (char *) malloc(ft_strs(str, charset));
	i = 0;

	while (str[i])
	{
		if (ft_charinstr(str[i], charset))
		{
			flag = *str;
		}
		else
		{

	





	
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);
	printf("%d", ft_strs(argv[1], argv[2]));
	char **tab = ft_split(argv[1], argv[2]);
	int i = 0;
	while (tab[i])
	{
		prinf("%s\n")
}
