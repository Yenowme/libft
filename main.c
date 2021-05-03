#include "libft.h"
#include <stdio.h>
#include <string.h>
int main()
{
	printf("\n==============memcpy==============\n");
	char a[8];

	ft_memcpy(a, "hello", 8);
	printf("%s ", a);
	memcpy(a,"what",5);
	printf("%s ", a);

	printf("\n==============strrchar==============\n");

	printf("%s", ft_strrchr("hellohi", 'h'));
	printf("%s", strrchr("hellohi", 'h'));
}
