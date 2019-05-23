/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:17:08 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/23 02:13:49 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
  
 char               *ft_strstr(const char *haystack, const char *needle)
 {
     const char *s1;
     const char *s2;
 
     while (*haystack != '\0')
     {
         s1 = haystack;
         s2 = needle;
         while (*s2 != '\0' && *s1 == *s2)
         {
             s1++;
             s2++;
         }
         if (*s2 == '\0')
             return ((char*)haystack);
         haystack++;
     }
     if (*needle == '\0')
             return (char *)(haystack);
     return (0);
 }
