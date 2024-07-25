/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 01:39:24 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/25 01:59:03 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*new_tab;

	new_tab = (int *) malloc(sizeof(int) * length);
	if (!new_tab)
		return (0);
	i = 0;
	while (i < length)
	{
		new_tab[i] = f(tab[i]);
		i++;
	}
	return (new_tab);
}

/*
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	 fact;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fact = nb;
	while (--nb > 0)
		fact *= nb;
	return (fact);
}

int main(void)
{
	int *test = (int *) malloc(sizeof(int) * 4);
	int i = 0;
	int j = 1;
	while (i < 4) {
		test[i] = j;
		j += 2;
		printf("%d: %d\n", i, test[i]);
		i++;
	}
	test = ft_map(test, 4, &ft_iterative_factorial);
	i = 0;
	while (test[i]) {
		printf("%d: %d\n", i, test[i]);
		i++;
	}
	return (0);
}
*/