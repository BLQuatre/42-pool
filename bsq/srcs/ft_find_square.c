/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:10:23 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/24 17:06:56 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

/**
 * Get the len of the square (x and y are the top left point)
 * @param map The map to get the biggest square
 * @param x Coord of the left of the square
 * @param y Coord of the top of the square
*/
int	ft_square(t_map *map, int x, int y)
{
	int	tmpx;
	int	tmpy;
	int	len;

	len = 0;
	while (x + len < map->width && y + len - 1 < map->height)
	{
		tmpy = y;
		while (tmpy < y + len)
		{
			tmpx = x;
			while (tmpx < x + len)
			{
				if (map->tab[tmpy][tmpx] == map->barrier)
					return (len - 1);
				tmpx++;
			}
			tmpy++;
		}
		len++;
	}
	return (len - 1);
}

t_square	*ft_find_square(t_map *map)
{
	t_square	*square;
	int			x;
	int			y;
	int			len;

	square = (t_square *) malloc(sizeof(t_square));
	square->length = 0;
	len = 0;
	y = -1;
	while (++y + square->length - 1 < map->height)
	{
		x = -1;
		while (++x + square->length - 1 < map->width)
		{
			len = ft_square(map, x, y);
			if (len > square->length)
			{
				square->length = len;
				square->x = x;
				square->y = y;
			}
		}
	}
	return (square);
}
