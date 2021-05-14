#include "libft.h"
#include <stdio.h>

int main()
{
	char *str;
	str = ft_itoa(42);
	printf("%s\n", str);
	free(str);
	while (1);
}
