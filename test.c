#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "includes/libft.h"

int main()
{
	int size = 8539;

	void * d1 = ft_calloc(size, sizeof(int));
	void * d2 = calloc(size, sizeof(int));
	if (memcmp(d1, d2, size * sizeof(int)))
		printf("error");
	free(d1);
	free(d2);
	printf("sucsses");

}
