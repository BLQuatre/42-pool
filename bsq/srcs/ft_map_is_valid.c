/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_is_valid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:57:40 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/24 17:35:44 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

/**
 * Check if characters in str show up only one time
 * @param str String to check
 * @return 0 if no error, 1 otherwise
*/
int	ft_str_is_unique(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (j < i)
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

/**
 * Check if charset for map is valid (3 chars)
 * @param str String to check
 * @return 0 if no error, 1 otherwise
*/
int	ft_charset_is_valid(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 3)
		return (1);
	if (ft_str_is_unique(str))
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
			return (1);
		i++;
	}
	return (0);
}

int	ft_map_is_valid(t_map *map, char *str)
{
	int	strlen;

	strlen = ft_strlen(str);
	if (strlen < 4)
		return (1);
	if (ft_charset_is_valid(str + (strlen - 3)))
		return (1);
	map->height = ft_atoi(str, (strlen - 3));
	if (map->height <= 0)
		return (1);
	map->empty = str[strlen - 3];
	map->barrier = str[strlen - 2];
	map->full = str[strlen - 1];
	return (0);
}
