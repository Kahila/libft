/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:05:48 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/22 05:30:21 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(dest);
	if (len > size)
		return (ft_strlen(src) + size);
	if (len < size)
	{
		ft_strncat(dest, src, size - len - 1);
	}
	return (ft_strlen(src) + len);
}
