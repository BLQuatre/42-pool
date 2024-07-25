/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:15:34 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/24 14:15:55 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_fill_map(t_map *map, t_square *square)
{
	int	x;
	int	y;

	y = 0;
	while (y < square->length)
	{
		x = 0;
		while (x < square->length)
		{
			map->tab[y + square->y][x + square->x] = map->full;
			x++;
		}
		y++;
	}
}
