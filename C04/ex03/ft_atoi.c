/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:30:26 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/09 12:00:39 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	unsigned int	i;
	int	nb;
	bool	is_negative;

	i = 0;
	nb = 0;
	is_negative = false;
	while (str[i] == " ")
		i++;
	if (str[i] != "+" && str[i] != "-")
		return 0;
	while(str[i] == "-" || str[i] == "+")
	{
		if (str[i] == "-")
			is_negative = !is_negative;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i];
		i++;
	}
	if (is_negative)
		nb *= -1;
	return (nb);
}
