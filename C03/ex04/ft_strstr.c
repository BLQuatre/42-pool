/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:57:58 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/08 16:42:37 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char 		*finded;
	unsigned int	i;
	unsigned int	j;

	finded = NULL;
	i = 0;
	while (str[i])
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (!finded)
				finded = &str[i]
			}
			j++;

			if (to_find[j] == "\0")
				return (finded);
		}
		i++;
	{

}
