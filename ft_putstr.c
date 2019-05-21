/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 11:54:24 by akalombo          #+#    #+#             */
/*   Updated: 2019/03/30 23:01:27 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        ft_putstr(char *str)
{
    int counter;

        counter = 0;
        while (str[counter] != '\0')
        {
            ft_putchar(str[counter]);
            counter++;
        }
}
