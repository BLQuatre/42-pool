/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:22:38 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/25 02:38:51 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	(void) argc;

	char **args = (char **) malloc(sizeof(char *) * (argc - 1) + sizeof(NULL));
	int i = 1;
	while (i < argc)
	{
		args[i - 1] = argv[i];
		printf("%d: %s\n", i, argv[i]);
		i++;
	}
	args[i] = NULL;
	printf("Result: %d", ft_count_if(args, argc - 1, &ft_str_is_numeric));
	free(args);
	return (0);
}
*/