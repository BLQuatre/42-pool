/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:05:03 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/15 22:26:18 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	mid;

	start = 0;
	mid = size / 2;
	size -= 1;
	while (start < mid)
	{
		ft_swap(&tab[start], &tab[size]);
		start++;
		size--;
	}
}
