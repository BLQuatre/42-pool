/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:57:31 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/15 10:58:58 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	tab_len;
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	tab_len = max - min;
	tab = (int *) malloc(tab_len);
	i = 0;
	while (i < tab_len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
