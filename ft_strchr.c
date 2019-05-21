/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:02:13 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/21 16:47:11 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char			*ft_strchr(const char *str, int c)
{
	int found = 0;
	while (*str++)
	{
		if(*str == (char)c)
		{
			found = 1;
			break;
		}
	} 
	if (found  == 0)
		return (0);
	else
		return (char *)(str);
}
