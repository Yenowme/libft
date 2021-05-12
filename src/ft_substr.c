/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 18:04:52 by yejeong           #+#    #+#             */
/*   Updated: 2021/05/12 18:20:22 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rt;
	int		i;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!(rt = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len-- && s[start + i])
	{
		rt[i] = s[start + i];
		i++;
	}
	rt[i] = 0;
	return (rt);
}
