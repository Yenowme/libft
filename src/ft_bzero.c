/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:55:46 by yejeong           #+#    #+#             */
/*   Updated: 2021/05/07 15:48:57 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

void	*ft_bzero(void *s, size_t len)
{
	unsigned char *temp;

	temp = (unsigned char*)s;
	while(len--)
	{
		*temp = 0;
		temp++;
	}
	return (s);
}
