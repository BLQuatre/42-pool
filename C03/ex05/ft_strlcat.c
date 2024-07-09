/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:25:54 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/09 10:59:02 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i < size && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[dest_len + i] = '\0';
		i++;
	}
	return (dest);
}
