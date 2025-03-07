/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:57:31 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/16 18:40:11 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	tab_len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab_len = max - min;
	*range = (int *) malloc(sizeof (int) * tab_len);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < tab_len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (tab_len);
}
