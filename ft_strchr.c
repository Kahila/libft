/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:02:13 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/21 16:42:36 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *str, int c)
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

int main()
{
	char name[30] = "adonis";
	printf("%s\n", strchr(name, 's'));
	printf("%s\n", ft_strchr(name, 's'));
	return (0);
}
