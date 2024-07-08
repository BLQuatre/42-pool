#include <stdio.h>
#include <string.h>
#include "ft_strncat.c"


int	main()
{
	char test[50] = "Youpi";
	char test2[50] = "aaaa";
	char test3[50] = "Youpi";
	char test4[50] = "aaaa";
	char test5[50] = "ATTACK";
	char test6[50] = "ASANA";
	char test7[50] = "ATTACK";
	char test8[50] = "ASANA";

	printf("--\n");
	printf("%s\n", strncat(test, test2, 2));
	printf("%s\n", ft_strncat(test3, test4, 2));
	printf("%s\n", strncat(test5, test6, 3));
	printf("%s\n", ft_strncat(test7, test8, 3));
}
