/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:27:40 by yejeong           #+#    #+#             */
/*   Updated: 2021/05/17 16:48:45 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*rt;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if (!(rt = malloc(sizeof(char) * i + 1)))
		return (0);
	i = 0;
	while (src[i])
	{
		rt[i] = src[i];
		i++;
	}
	rt[i] = '\0';
	return (rt);
}
