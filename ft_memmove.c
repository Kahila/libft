/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 08:17:53 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/18 08:49:41 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char *src1;
	char *dst1;

	if (!dst && !src)
		return (NULL);
	src1 = (char*)src;
	dst1 = (char*)dst;
	if (src1 < dst1)
	{
		src1 = src1 + len - 1;
		dst1 = dst1 + len - 1;
		while (len-- > 0)
			*dst1-- = *src1--;
	}
	else
		while (len-- > 0)
			*dst1++ = *src1++;
	return (dst);
}
