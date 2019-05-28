/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 08:17:53 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/28 10:32:01 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
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

int main()
{
	char dst[10];
	char scr[5] = "Nathi";
	size_t len;
	len = 1;
	printf("System : %s\n" , memmove(dst, scr ,len));
	printf("ft_memmpove : %s\n", ft_memmove(dst, scr, len));
	return (0);
}
