/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:10:12 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/23 13:50:39 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

unsigned int	ft_atoi(char *str, int n)
{
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	while (i < n && str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if (i != n)
		return (0);
	return (nb);
}
