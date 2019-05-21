/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:55:01 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/21 08:46:14 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *s1, const void *s2, size_t size)
{
	char *dest = s1;
	const char *src = s2;
	while (size--)
	{
		*dest = *src;
		s1++;
		s2++;	
	}
	return (s1);
}
