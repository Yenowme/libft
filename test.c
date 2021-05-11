#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main()
{
	char *s = "split  ||this|for|me|||||!|";
	int i = 0;
	char **result = ft_split(s, '|');

	while (result[i])
	{
		printf ("%dis = %s\n",i , result[i]);
		free(result[i]);
		i++;
	}
	free(result);

}
