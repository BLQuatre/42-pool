/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:28:58 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/25 02:38:31 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdlib.h>
#include <stdio.h>

int	ft_sign(int n1, int n2)
{
	return (n1 - n2);
}

int main(void)
{
	int *test = (int *) malloc(sizeof(int) * 4);
	int i = 0;
	int j = 1;
	while (i < 4) {
		test[i] = j;
		j *= -2;
		printf("%d: %d\n", i, test[i]);
		i++;
	}
	printf("Result: %d\n", ft_is_sort(test, 4, &ft_sign));
	return (0);
}
*/