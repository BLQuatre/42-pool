/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 23:54:10 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/04 11:45:10 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	int	n1;

	if (n < 0)
	{
		ft_putchar('-');
		if (n == INT_MIN)
		{
			write(1, "2147483648", 10);
			return ;
		}
		n *= -1;
	}
	if (n > 9)
	{
		n1 = n / 10;
		n -= 10 * n1;
		ft_putnbr(n1);
	}
	ft_putchar('0' + n);
}
