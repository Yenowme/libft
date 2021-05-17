/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:47:22 by yejeong           #+#    #+#             */
/*   Updated: 2021/05/13 17:26:45 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *temp;

	temp = (unsigned char *)dst;
	if (dst == src)
		return (dst);
	while (n--)
	{
		*temp = *(unsigned char *)src;
		temp++;
		src++;
	}
	return (dst);
}
