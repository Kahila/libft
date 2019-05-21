/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:04:51 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/20 13:16:54 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                *ft_memset(void *start, int init, size_t size)
{
    unsigned char *ptr;
    ptr = (unsigned char*)start;
    while (size > 0)
    {
        *ptr++ = (unsigned char)init;
        size--;
    }
    return (start);

}
