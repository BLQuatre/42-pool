/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:40:04 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/24 18:44:26 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

// TODO DELETE AFTER
# include <stdio.h>

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_map
{
	int		width;
	int		height;
	char	empty;
	char	barrier;
	char	full;
	char	**tab;
}	t_map;

typedef struct s_square
{
	int	x;
	int	y;
	int	length;
}	t_square;

typedef struct s_barrier
{
	int	x;
	int	y;
}	t_barrier;

/**
 * Transform t->hhe given string to a integer (if it's possible)
 * @note This function only transform positive integer
 * @param str Given string
 * @param n Max length to check
 * @return Integer from the string or 0 if the transformation failed
*/
unsigned int	ft_atoi(char *str, int n);

/**
 * Check if map contains only the 3 chars needed (empty, full, barrier)
 * @param The map to check
 * @return 0 if no error, 1 otherwise
 * @note The map must have height, width, empty, barrier, full and tab not null
*/
int				ft_charmap_is_valid(t_map *map);

/**
 * Fill the map with the given square
 * @param map The pointer of the map
 * @param square The pointer of the square
*/
void			ft_fill_map(t_map *map, t_square *square);

/** Find square in a given map
 * @param The given map
 * @return The struct square with x, y (top left) and square len
*/
t_square		*ft_find_square(t_map *map);

/**
 * Check if map len is correct
 * @param map The map to check
 * @return 0 if no error, 1 otherwise
*/
int				ft_lenmap_is_valid(t_map *map);

/**
 * Check if given string format is xxxabc
 * @note xxx is a number >= 1
 * @note a, b and c are printables characters
 * @param map The ptr of the map to put the value in
 * @param str Formatted string (normally)
 * @return 0 if no error, 1 otherwise
*/
int				ft_map_is_valid(t_map *map, char *str);

/**
 * Read the first line of the file 
 * @param file Filename of the file to read
 * @return First line of file
*/
char			*ft_read_first_line(char *file);

/**
 * Read the first line of the standard input 
 * @return First line of standard input 
*/
char			*ft_read_first_line_std(void);

/**
 * Put the map in the tab of t_map struct 
 * @param file File name of map
 * @param map t-map struct
 * @return 0 if success, 1 if not 
*/
int				ft_read_map(char *file, t_map *map);

/**
 * Put the map in the tab of t_map struct from standard input 
 * @param map t-map struct
 * @return 0 if success, 1 if not 
*/
int				ft_read_map_std(t_map *map);

/**
 * Show map on screen
 * @param map The pointer of the map
 * @return 0 if no error, 1 otherwise
*/
int				ft_show_map(t_map *map);

/**
 * Get the length of a string
 * 
 * @param str String to get the length
 * @return Length of given string
 */
int				ft_strlen(char *str);

#endif