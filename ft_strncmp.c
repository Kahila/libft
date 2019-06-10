/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:16:59 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/10 10:59:01 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n--)
	{
		str1++;
		str2++;
	}
	return ((unsigned char)(*str1) - (unsigned char)(*str2));
}
