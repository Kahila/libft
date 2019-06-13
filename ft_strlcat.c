/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:05:48 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/13 02:42:05 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t          ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  l1;
    size_t  l2;

    l1 = 0;
    l2 = ft_strlen((char *)src);
    while (*dst && size > 0)
    {
        dst++;
        l1++;
        size--;
    }
    ft_strncat(dst,(char *)src, size - 1);
    if (size == 1 || *src == 0)
        *dst = '\0';
    return (l2 + l1);
}
