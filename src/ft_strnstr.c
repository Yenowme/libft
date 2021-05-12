/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 12:59:37 by yejeong           #+#    #+#             */
/*   Updated: 2021/05/12 18:12:05 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	if (!*needle)
		return ((char*)haystack);
	while (*haystack && len)
	{
		i = 0;
		while (haystack[i] == needle[i] && i < len)
		{
			i++;
			if (!needle[i])
				return ((char*)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
