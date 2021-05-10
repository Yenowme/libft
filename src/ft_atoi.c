/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:18:16 by yejeong           #+#    #+#             */
/*   Updated: 2021/05/10 16:18:01 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	atoi_sub(char *str)
{
	int i;
	int rt;

	rt = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		rt += (int)str[i] - '0';
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			rt *= 10;
		i++;
	}
	return (rt);
}

int		ft_atoi(char *str)
{
	int i;
	int sum;
	int rt;

	sum = 1;
	i = 0;
	rt = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sum = -1;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		rt = atoi_sub(&str[i]);
		rt *= sum;
	}
	return (rt);
}
