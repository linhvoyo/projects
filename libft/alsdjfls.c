/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 01:57:32 by lilam             #+#    #+#             */
/*   Updated: 2017/12/02 02:12:37 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int i;
	int power;
	int neg;

	if (value < 0)
	{
		n = n * -1;
		neg = 1;
	}
	while (n >= power * 10)
	{
		power = power * 10;
		i++;
	}

}
