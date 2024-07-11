/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:57:31 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/11 23:59:14 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_range_len(int i1, int i2)
{
	int	difference;

	difference = i1 - i2;
	if (difference < 0)
		difference = -difference;
	return (difference);
}

int	*ft_range(int min, int max)
{
	int	tab_len;
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	tab_len = ft_range_len(min, max);
	tab = (int *) malloc(tab_len);
	i = 0;
	while (i < tab_len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
