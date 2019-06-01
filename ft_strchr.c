/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:02:13 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/01 13:47:34 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char			*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if(*str == (char)c)
			return (char *)(str);
        str++;
	} 
	if (c  == 0)
		return ((char *)str);
    else
        return (0);
}
