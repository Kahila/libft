/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 08:17:53 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/26 08:19:41 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char *strsrc;
    char *strdst;
 
    strsrc = (char*)src;
    strdst = (char*)dst;
    if (strsrc < strdst)
    {
        strsrc = strsrc + len - 1;
        strdst = strdst + len - 1;
        while (len-- > 0)
            *strdst-- = *strsrc--;
    }
    else
        while (len-- > 0)
            *strdst++ = *strsrc++;
 
    return (dst);
}   
