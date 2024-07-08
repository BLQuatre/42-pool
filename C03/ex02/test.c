#include <stdio.h>
#include <string.h>
#include "ft_strcat.c"


int	main()
{
	char test[50] = "Youpi";
	char test2[50] = "aaaa";
	printf("--\n");
	printf("%s\n", strcat(test, test2));
	printf("%s\n", ft_strcat(test, test2));

}
