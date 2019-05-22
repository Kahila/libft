/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 10:50:49 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/22 11:43:02 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int             ft_strlen(char *str)
{
    int intCounter = 0;

    while (str[intCounter] != 0)
        intCounter++;

    return (intCounter);
}
