/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:57:31 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/11 18:38:23 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_range_len(int i1, int i2)
{
	while (i1 < i2)
		i1++;
	return (i1);
}	

int	*ft_range(int min, int max)
{
	int		tab_len;
	int	*tab;
	int	i;


	if (min >= max)
		return (NULL);


	tab_len = ft_range_len(min, max);
	printf("Len: %d\n", tab_len);
	tab = (int *) malloc(tab_len);
	i = 0;
	while (i < tab_len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}


int main()
{
	int *tab = ft_range(-10, 20);
	int i = 0;

	while (tab[i])
	{
		printf("%d ", tab[i]);
		i++;
	}
}

