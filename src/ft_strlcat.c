/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:11:13 by yejeong           #+#    #+#             */
/*   Updated: 2021/05/10 17:02:42 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	set_size(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t dest_s;
	size_t src_s;
	size_t i;
	size_t j;

	src_s = set_size(src);
	dest_s = set_size(dest);
	i = 0;
	j = dest_s;
	while (j < size - 1 && src[i] && size > dest_s + 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	if (dest_s > size)
		return (src_s + size);
	dest[j] = '\0';
	return (src_s + dest_s);
}
