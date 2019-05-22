/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:55:04 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/22 11:56:42 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *str, int c)
{
	int found = 0;
	char *str1 = (char *)str;
	while (*str1)
	{
		if (*str1 == (char)c)
			found++;
		str1++;
	}
	while (*str)
	{
		if (*str == (char)c)
		{
			if (found == 1)
				break;
			else
				found--;
		}
		str++;
	}
	if (found == 0)
		return (0);
	else
		return (char *)str;
}
