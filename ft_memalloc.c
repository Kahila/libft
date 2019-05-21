/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 13:56:10 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/18 10:27:03 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                    *ft_memalloc(size_t size)
{
  	void *alocated;
    alocated = (void *)malloc(size);
    if (alocated == NULL)
        return (NULL);
    else
        return (ft_memset (alocated, 0, size));
}
