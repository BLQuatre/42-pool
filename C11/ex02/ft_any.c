/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <cauvray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:01:11 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/25 02:25:55 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
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
	printf("Result: %d", ft_any(args, &ft_str_is_numeric));
	free(args);
	return (0);
}
*/