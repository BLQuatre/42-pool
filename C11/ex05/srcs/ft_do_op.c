/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:40:44 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/25 03:29:30 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"
#include <unistd.h>

int ft_do_op(char op, int a, int b)
{
	if (op == '+')
		return (ft_add(a, b));
	else if (op == '-')
		return (ft_sub(a, b));
	else if (op == '*')
		return (ft_mul(a, b));
	else if (op == '/')
	{
		if (b == 0)
		{
			write(1, "Stop : division by zero", 20);
			return (-1);
		}
		return (ft_div(a, b));
	}
	else if (op == '%')
	{
		if (b == 0)
		{
			write(1, "Stop : modulo by zero", 20);
			return (-1);
		}
		return (ft_mod(a, b));
	}
	else
		return (0);
}

void	ft_check_op(char op, int n1, int n2)
{

	if (op == '/' && n2 == 0)
		write (1, "Stop : division by zero", 23);
	else if (op == '%' && n2 == 0)
		write (1, "Stop : modulo by zero", 21);
	else
	{
		ft_putnbr(ft_do_op(op, n1, n2));
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	ft_check_op(argv[2][0], ft_atoi(argv[1]), ft_atoi(argv[3]));
	return (0);
}