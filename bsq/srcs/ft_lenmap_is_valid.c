/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenmap_is_valid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:35:46 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/24 18:48:22 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

/**
 * Check if map len is correct
 * @param map The map to check
 * @return 0 if no error, 1 otherwise
*/
int	ft_lenmap_is_valid(t_map *map)
{
	int	i;
	int	len;
	int	y;

	y = 0;
	len = 0;
	while (y < map->height)
	{
		i = 0;
		while (map->tab[y][i])
		{
			len++;
			i++;
		}
		y++;
	}
	if (len == (map->height * map->width) - map->height)
		return (0);
	return (1);
}
