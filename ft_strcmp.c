/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:06:53 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/10 13:45:58 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcmp(const char *str1, const char *str2)
{
	size_t n;

	while (*str1 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	n = (unsigned char)*str1 - (unsigned char)*str2;
	return (n);
}
