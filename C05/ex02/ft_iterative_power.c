/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cauvray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:07:42 by cauvray           #+#    #+#             */
/*   Updated: 2024/07/10 18:11:25 by cauvray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	pow = nb;
	while(--power > 0)
		pow *= nb;
	return (pow);
}


#include <stdio.h>
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

	printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}

