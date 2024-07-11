/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:52:15 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/11 15:54:38 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = (char *) malloc(ft_strlen(src));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int main()
{
	char *src = "ATTAQUE";
	char *dest = ft_strdup(src);
	printf("%s - %s\n", src, dest);
	src = "magic";
	printf("%s - %s\n", src, dest);
}
*/
