#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "includes/libft.h"

int main()
{
	char *src = "abbbbbbbb";
	char *d1 = strrchr(src, 'a');
	char *d2 = ft_strrchr(src, 'a');

	printf("%s\n%s\n", d1, d2);

	src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	d1 = strrchr(src, '\0');
	d2 = ft_strrchr(src, '\0');
	printf("%s\n%s\n", d1,d2);
}
