/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:00:16 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/20 14:31:43 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *           ft_strmap(char const *s, char (*f)(char))
{
    unsigned int count = 0;
    char* fresh;

    fresh = ft_strnew(ft_strlen((char *)s));
    if(fresh == NULL)
        return (NULL);
    else
    {
        while (s[count] != '\0')
        {
            fresh[count] = f(s[count]);
            count++;
        }
    }
    return (fresh);
}
