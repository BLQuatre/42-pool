/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:30:26 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/09 17:29:38 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	unsigned int	i;
	int	nb;
	int	is_negative;

	i = 0;
	nb = 0;
	is_negative = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] != '+' && str[i] != '-')
		return -8;
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			if (is_negative == 1)
				is_negative = 0;
			else
				is_negative = 1;
		}
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return -4;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + str[i];
		i++;
	}
	if (is_negative == 1)
		nb *= -1;
	return (nb);
}

int main(int argsc, char *args[])
{
	printf("%d", ft_atoi("   +-+--4564"));
}
