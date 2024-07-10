/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:07:42 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/10 18:39:19 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	rt;

	rt = 0;
	while ((rt + 1) * (rt + 1) <= nb)
		rt++;
	if (rt * rt == nb)
		return (rt);
	return (0);
}

int atoi(const char* str){
    int num = 0;
    int i = 0;
    int isNegetive = 0;
    if(str[i] == '-'){
        isNegetive = 1;
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9')){
        num = num * 10 + (str[i] - '0');
        i++;
    }
    if(isNegetive) num = -1 * num;
    return num;
}
int	main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;

	printf("%d", ft_sqrt(atoi(argv[1])));
}

