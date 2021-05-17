/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 18:04:52 by yejeong           #+#    #+#             */
/*   Updated: 2021/05/16 21:10:01 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rt;
	int		i;
	size_t	size;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s) > len ? len : ft_strlen(s);
	if (!(rt = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (len-- && s[start + i])
	{
		rt[i] = s[start + i];
		i++;
	}
	rt[i] = 0;
	return (rt);
}
