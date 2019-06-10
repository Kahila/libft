/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:55:01 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/10 10:46:59 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *s1, const void *s2, size_t size)
{
	char		*dest;
	const char	*src;

	dest = s1;
	src = s2;
	while (size--)
	{
		*dest++ = *src++;
	}
	return (s1);
}
