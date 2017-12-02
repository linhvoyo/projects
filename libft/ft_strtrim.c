/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:19:02 by lilam             #+#    #+#             */
/*   Updated: 2017/12/02 02:35:11 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int        left_ws(char const *s)
{ 
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

int right_ws(char const *s)
{
	int i;

	i = ft_strlen(s) - 1;
	while (i > 0 && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\0'))
		i--;
	return (ft_strlen(s) - 1 - i);
}

char *ft_strtrim(char const *s)
{
	int i;
	int size;
	int j;
	char *str;

	j = 0;
	if (!s)
		return (NULL);
	size = ft_strlen(s) - right_ws(s) - left_ws(s);
	if (size < 0)
		return ("\0");
	str = (char *)malloc(sizeof(*str) * (size + 1));
	if (!str)
		return (NULL);
	i = left_ws(s);
	while (i < left_ws(s) + size)
		str[j++] = s[i++];
	str[j] = '\0';
	return(str);
}
