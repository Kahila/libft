/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 05:50:15 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/23 11:11:08 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char        *ft_strnstr (const char *haystack, const char *needle, size_t len)
{
    const char *s1;
    const char *s2;

    if (*needle == '\0' || len  == 0)
        return (char *)(haystack);

    while (*haystack != '\0')
    {
        if (len >= 0)
        {
            s1 = haystack;
            s2 = needle;
            while (*s1 == *s2 && *s2 != '\0')
            {
                s1++;
                s2++;
            }
            if (*s2 == '\0')
                return (char *)(haystack);
            haystack++;
            len--;
        }
        else break;
    }
    return (NULL);
}
