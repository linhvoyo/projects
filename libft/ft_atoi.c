/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 10:00:15 by lilam             #+#    #+#             */
/*   Updated: 2017/12/01 13:53:12 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MAX 9223372036854775807

int	ft_atoi(const char *str)
{
	long i;
	long val;
	long sign;

	sign = 1;
	i = 0;
	val = 0;
	while (DL(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	if (str[++i] == '-')
		sign = -1;
	if (DL(str[i]) || (str[i] >= 0 && str[i] <= 31))
		return (0);
	while (str[i])
	{
		if (val * 10 + str[i] - '0' > MAX / val)
			return (-1);
		if (str[i] >= '0' && str[i] <= '9')
			val = val * 10 + str[i] - '0';
		i++;
	}
	return (val * sign);
}
