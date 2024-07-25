/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:23:01 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/24 18:42:43 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

/**
 * Show the given on the standard output
 * @param str String to show
*/
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_show_map(t_map *map)
{
	int	i;

	if (ft_strlen(map->tab[0]) == 0)
		return (1);
	i = 0;
	while (i < map->height)
	{
		ft_putstr(map->tab[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
