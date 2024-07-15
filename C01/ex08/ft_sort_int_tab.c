/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:39:00 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/15 22:26:19 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < size)
	{
		tmp = tab[i];
		j = i;
		while (j > 0 && tab[j - 1] > tmp)
		{
			tab[j] = tab[j - 1];
			j--;
		}
		tab[j] = tmp;
		i++;
	}
}
