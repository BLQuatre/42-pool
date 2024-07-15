/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:42:15 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/15 18:07:37 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int	i;

	tab = (t_stock_str *) malloc((ac + 1) * 24);
	if (tab == NULL)
		return NULL;
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = (char *) malloc(tab[i].size + 1);
		if (tab[i].copy == NULL)
			return NULL;
		ft_strcpy(tab[i].copy, av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

int main()
{
	printf("%lu", sizeof(char));
}


