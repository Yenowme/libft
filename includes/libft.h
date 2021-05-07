/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:00:56 by yejeong           #+#    #+#             */
/*   Updated: 2021/05/04 18:47:43 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strrchr(const char *s, int c);
void	*ft_bzero(void *s, size_t len);
int			ft_atoi(char *str);

int	ft_isalpha(char *str);
int	ft_isdigit(char *str);

#endif
