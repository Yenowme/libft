#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../includes/libft.h"

int main()
{
	printf("\n===atoi====\n");
	printf("%d\n" , atoi(" \t \v    123"));
	printf("%d\n" , atoi("- -123"));
	printf("%d\n" , atoi(" -123"));
	printf("%d\n" , atoi("++123"));
	printf("%d\n" , atoi("+123"));
	printf("%d\n" , atoi("2147483647"));
	printf("%d\n" , atoi("-2147483648"));
	printf("%d\n" , atoi("-2147483649"));
	printf("%d\n" , atoi("2147483649"));

	printf("\n===ft_atoi====\n");
	printf("%d\n" , ft_atoi(" \t \v    123"));
	printf("%d\n" , ft_atoi("- -123"));
	printf("%d\n" , ft_atoi(" -123"));
	printf("%d\n" , ft_atoi("++123"));
	printf("%d\n" , ft_atoi("+123"));
	printf("%d\n" , ft_atoi("2147483647"));
	printf("%d\n" , ft_atoi("-2147483648"));
	printf("%d\n" , ft_atoi("-2147483649"));
	printf("%d\n" , ft_atoi("2147483649"));

	printf("\n===memcpy====\n");
	printf("%s", memcpy);
}
