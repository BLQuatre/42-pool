/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:30:41 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/24 18:54:17 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

/**
* Find the biggest square in file and fill it
* @param file Filename of the map
* @return 0 if no error, 1 otherwise
*/
int	ft_squared_map(char *file)
{
	char		*line1;
	t_map		*map;
	t_square	*square;

	line1 = ft_read_first_line(file);
	map = (t_map *) malloc(sizeof (t_map));
	if (ft_map_is_valid(map, line1))
		return (1);
	if (ft_read_map(file, map))
		return (2);
	if (ft_charmap_is_valid(map))
		return (3);
	if (ft_lenmap_is_valid(map))
		return (4);
	square = ft_find_square(map);
	ft_fill_map(map, square);
	if (ft_show_map(map))
		return (4);
	return (0);
}

/**
* Find the biggest square in standard input and fill it
* @return 0 if no error, 1 otherwise
*/
int	ft_squared_map_std(void)
{
	char		*line1;
	t_map		*map;
	t_square	*square;

	line1 = ft_read_first_line_std();
	map = (t_map *) malloc(sizeof (t_map));
	if (ft_map_is_valid(map, line1))
		return (1);
	if (ft_read_map_std(map))
		return (2);
	if (ft_charmap_is_valid(map))
		return (3);
	if (ft_lenmap_is_valid(map))
		return (4);
	square = ft_find_square(map);
	ft_fill_map(map, square);
	ft_show_map(map);
	return (0);
}

/**
 * Print map error if param is >= 1
 * @param error an error ?
 * @param print_newline Print new line ?
*/
void	ft_write_error(int error, int print_newline)
{
	if (error >= 1)
		write(2, "map error\n", 10);
	else if (print_newline == 1)
		write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	error;

	if (argc < 2)
	{
		error = ft_squared_map_std();
		ft_write_error(error, 0);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			error = ft_squared_map(argv[i]);
			ft_write_error(error, i != argc - 1);
			i++;
		}
	}
	error = 0;
	return (error);
}
