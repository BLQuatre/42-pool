/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:08:56 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/15 18:38:47 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../ex04/ft_strs_to_tab.c"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}