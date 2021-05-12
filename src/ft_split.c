/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:59:30 by yejeong           #+#    #+#             */
/*   Updated: 2021/05/12 16:43:28 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**x_malloc(char const *s, char c)
{
	char	**rt;
	int		x_size;

	x_size = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		x_size++;
		while (*s != c)
			s++;
		while (*s++ == c)
			s++;
	}
	return (rt = (char**)malloc(sizeof(char*) * (x_size + 1)));
}

char		**final_free(char **rt, int k)
{
	while (--k > 0)
		free(rt[k]);
	free(rt);
	return (0);
}

char		**ft_split(char const *s, char c)
{
	char	**rt;
	int		i;
	int		k;
	int		index;
	int		y_size;

	i = 0;
	k = 0;
	if (!(rt = x_malloc(s, c)))
		return (0);
	while (s[i] == c)
		i++;
	index = i;
	while (s[i])
	{
		y_size = 0;
		while (s[i++] != c)
			y_size++;
		if (!(rt[k++] = ft_substr(s, index, y_size)))
			return (final_free(rt, k));
		while (s[i] == c)
			i++;
		index = i;
	}
	rt[k] = 0;
	return (rt);
}
