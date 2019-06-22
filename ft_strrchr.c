/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:55:04 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/22 05:06:07 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *str, int c)
{
	char *found;

	found = 0;
	while (*str)
	{
		if (*str == c)
			found = (char *)str;
		str++;
	}
	if (found)
		return (found);
	else if (c == '\0')
		return (char *)str;
	return (NULL);
}
