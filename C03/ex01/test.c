#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"


int	main()
{
	printf("%d\n", strncmp("ABC", "AB", 3));
	printf("%d\n", ft_strncmp("ABC", "AB", 3));
	printf("%d\n", strncmp("ABC", "AB", 2));
	printf("%d\n", ft_strncmp("ABC", "AB", 2));

}
