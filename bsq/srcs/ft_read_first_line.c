/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_first_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:15:13 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/27 23:23:41 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

char	*ft_read_first_line(char *file)
{
	int		fd;
	char	*buff;
	int		size;
	int		i;
	char	*ret;

	i = 0;
	buff = (char *) malloc(sizeof(char) * 20);
	fd = open(file, O_RDONLY, 444);
	ret = (char *) malloc(sizeof(char) * 20);
	size = read(fd, buff, 19);
	buff[size] = '\0';
	while (buff[i] && buff[i] != '\n')
	{
		ret[i] += buff[i];
		i++;
	}
	close(fd);
	return (ret);
}

char	*ft_read_first_line_std(void)
{
	char	*buff;
	int		size;
	int		i;
	char	*ret;

	i = 0;
	buff = (char *) malloc(sizeof(char) * 20);
	ret = (char *) malloc(sizeof(char) * 20);
	size = read(0, buff, 19);
	buff[size] = '\0';
	while (buff[i] != '\n')
	{
		ret[i] += buff[i];
		i++;
	}
	return (ret);
}
