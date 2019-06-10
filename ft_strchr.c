/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:38:34 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/10 09:38:58 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return (char *)(str);
		str++;
	}
	if (c == 0)
		return ((char *)str);
	else
		return (0);
}
