/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:36:21 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/24 18:51:56 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"
#include <stdio.h>

/**
 * Count the number of new line in the given output
 * @param String to count
 * @return Numer of new line (\n)
*/
int	ft_count_newline(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

/**
 * Get the len of the first line of the map
 * @param fd File descriptor
 * @return Length of the first line of the map
*/
int	ft_buflen(int fd)
{
	int		temp;
	char	*buff;
	int		buff_size;

	temp = 20;
	buff = (char *) malloc(sizeof(char) * temp);
	while (ft_count_newline(buff) < 2)
	{
		temp += 20;
		free(buff);
		buff = (char *) malloc(sizeof(char) * temp);
		read(fd, buff, temp - 1);
	}
	temp = 0;
	while (buff[temp] && buff[temp] != '\n')
		temp++;
	temp++;
	buff_size = 0;
	while (buff[temp] && buff[temp] != '\n')
	{
		temp++;
		buff_size++;
	}
	free(buff);
	return (buff_size + 1);
}

/**
 * Put in map.tab all the map 
 * @param map t_map struct
 * @param buff Buffer of file read
 * @param ret Tab to put buffer in map.tab
 * @param fd File descriptor of file 
*/
int	ft_puttab(t_map *map, char *buff, char **ret, int fd)
{
	int	i;
	int	y;
	int	size;

	i = 0;
	size = 0;
	while (buff[i] && buff[i++] != '\n')
		(void) i;
	while (size < map->height)
	{
		y = 0;
		ret[size] = (char *) malloc(sizeof(char *) * map->width);
		if (ret[size] == NULL)
			return (1);
		while (buff[i] && buff[i] != '\n')
		{
			ret[size][y++] = buff[i++];
		}
		ret[size++][y] = '\0';
		i++;
	}
	map->tab = ret;
	if (fd != 0)
		close(fd);
	return (0);
}

int	ft_read_map(char *file, t_map *map)
{
	int		fd;
	char	*buff;
	int		size;
	char	**ret;

	fd = open(file, O_RDONLY, 444);
	map->width = ft_buflen(fd);
	close(fd);
	ret = (char **) malloc(sizeof(char *) * map->height);
	if (ret == NULL)
		return (1);
	buff = (char *)malloc(sizeof(char) * map->width * map->height + 99);
	if (buff == NULL)
		return (1);
	fd = open(file, O_RDONLY, 444);
	size = read(fd, buff, (map->width * map->height) + 99);
	buff[size] = '\0';
	size = ft_puttab(map, buff, ret, fd);
	free(buff);
	return (size);
}

int	ft_read_map_std(t_map *map)
{
	char	*buff;
	int		size;
	char	**ret;

	map->width = ft_buflen(0);
	ret = (char **) malloc(sizeof(char *) * map->height);
	if (ret == NULL)
		return (1);
	buff = (char *)malloc(sizeof(char) * map->width * map->height + 99);
	if (buff == NULL)
		return (1);
	size = read(0, buff, (map->width * map->height) + 99);
	buff[size] = '\0';
	size = ft_puttab(map, buff, ret, 0);
	free(buff);
	return (size);
}
