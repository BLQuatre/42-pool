/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 23:54:10 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/04 00:44:24 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printdigits(int n)
{
	int	d;
	int	u;

	if (n > 9)
	{
		d = n / 10;
		u = n % 10;
		ft_putchar(d + '0');
		ft_putchar(u + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_printdigits(n1);
			ft_putchar(' ');
			ft_printdigits(n2);
			if (n1 < 98 || n2 < 99)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}
