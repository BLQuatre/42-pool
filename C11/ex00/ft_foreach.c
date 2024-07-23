/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 02:17:11 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/23 02:25:49 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
#include <stdlib.h>
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
		if (n == -2147483648)
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

int main (void)
{
	int	i;
	int *tab;
	int tab_len;

	tab_len = 10;
	tab = malloc(tab_len * sizeof(int));
	i = 0;
	while (i < tab_len)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, tab_len, &ft_putnbr);
}
*/