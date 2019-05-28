/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:08:14 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/28 09:39:46 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy (void *d1, const void *s1, int c, size_t size)
{
	char  *dest = (char *)d1;
	const char *src = (const char *)s1;

	while (size--)
	{
		*dest = *src;
		if (*src == (const char)c)
		{
			return ((char *)d1 + 1);
			break;
		}
		dest++;
		src++;
		d1++;
		s1++;
	}
	return (0);
}
