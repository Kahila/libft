/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 05:50:15 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/23 06:36:05 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char        *ft_strnstr (const char *haystack, const char *needle, int len)
{

    const char *s1;
    const char *s2;
    if (*needle == '\0')
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


#include <stdio.h>
#include <string.h>
int main()
{
    char name[30] = "adonis";
    char find[10] = "o";

    printf("%s\n", ft_strnstr(name, find, 1)); 
    return (0);
}
