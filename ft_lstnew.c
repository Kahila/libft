/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 20:28:26 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/16 21:03:40 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list          *ft_lstnew(void const *content, size_t content_size)
{
    t_list *fresh;
    //char *new;

    //new = (char *)content;
    fresh = ft_memalloc(sizeof(t_list));
    if (!fresh)
        return (NULL);
    if (!content)
    {
        content = NULL;
        content_size = 0;
        fresh->next = NULL;
    }
    fresh->content = (void *)content;
    fresh->content_size = content_size;
    return ((void *)fresh);
}
