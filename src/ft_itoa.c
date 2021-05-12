/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeong-yena <jeong-yena@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:52:46 by yejeong           #+#    #+#             */
/*   Updated: 2021/05/12 12:12:13 by jeong-yena       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void *malloc_size(int n, int *size)
{
	if (n == 0)
		return (0);
	else
	{
		malloc_size(n / 10, size);
		*size++;
	}
}

static void set_itoa(char *rt, int n, int size)
{
	if (n == 0)
	{
		rt[size] = n % 10;
	}
	else
	{
		set_itoa(rt, n / 10, size - 1);
	}
}

char *ft_itoa(int n)
{
	char 	*rt;
	int size;

	size = 0;
	malloc_size(n, &size);
	if (!(rt = malloc(sizeof(int) * (size + 1))))
		return (0);
	set_itoa(rt, n, size);
}
