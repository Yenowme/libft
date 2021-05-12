/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:42:45 by yejeong           #+#    #+#             */
/*   Updated: 2021/05/12 18:22:04 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*rt;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (0);
	while ((ft_strchr(set, *s1)) && *s1)
		s1++;
	start = (char *)s1;
	if (!*start)
		return (rt = malloc(1));
	while (*s1)
		s1++;
	while (ft_strchr(set, *s1) && s1 > start)
		s1--;
	end = (char *)s1;
	if (!(rt = malloc(end - start + 2)))
		return (0);
	while (start <= end)
		rt[i++] = *start++;
	rt[i] = 0;
	return (rt);
}
