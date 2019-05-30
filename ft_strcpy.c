/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:07:03 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/30 14:25:51 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char            *ft_strcpy(char *s1, char *s2)
{
    int intCount = 0;
    while (s2[intCount] != '\0')
    {
        s1[intCount] = s2[intCount];
        intCount++;
    }
     s1[intCount] = '\0';
    
    return (s1);
}
