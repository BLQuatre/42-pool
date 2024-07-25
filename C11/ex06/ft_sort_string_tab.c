/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:58:58 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/25 11:45:05 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j + 1] && ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str = "ATT";
	char *str2 = "YIPPIE";
	char *str3 = "ATTAK";

	char **tab = (char **) malloc(sizeof(char *) * 3 + sizeof(NULL));
	tab[0] = str;
	tab[1] = str2;
	tab[2] = str3;
	tab[3] = NULL;

	int i = 0;
	printf("Tab avant:\n");
	while (tab[i])
	{
		printf("%d: %s\n", i, tab[i]);
		i++;
	}
	ft_sort_string_tab(tab);
	printf("Tab apres:\n");
	i = 0;
	while (tab[i])
	{
		printf("%d: %s\n", i, tab[i]);
		i++;
	}
}
*/