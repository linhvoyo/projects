/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cal_words.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 06:21:30 by linh              #+#    #+#             */
/*   Updated: 2017/12/03 06:37:09 by linh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_cal_words(char const *s, char c)
{
		int i;

		i = 0;
		if (*s && *s != c)
				i++;
		while (*s)
		{
				if (*s != c && *(s - 1) == c)
						i++;
				s++;
		}
		return (i);
}

#include <stdio.h>

//int main()
//{
//		printf("%d ", ft_cal_words("   asdfadf asdadsf sdfa   ",  ' '));
//}
