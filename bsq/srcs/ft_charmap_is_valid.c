/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charmap_is_valid.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:47:46 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/24 17:30:56 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int	ft_charmap_is_valid(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width - 1)
		{
			if (map->tab[i][j] != map->empty
				&& map->tab[i][j] != map->barrier
				&& map->tab[i][j] != map->full)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
