/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 09:33:53 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/10 08:52:33 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *s;
	unsigned char ch;

	ch = (unsigned char)(c);
	s = (unsigned char *)(str);
	while (n--)
	{
		if (*s != ch)
			s++;
		else
			return (s);
	}
	return (0);
}
