/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 10:56:29 by akalombo          #+#    #+#             */
/*   Updated: 2019/06/15 16:49:24 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char			**ft_strsplit(char const *s, char c)
{
	char **str = NULL;
	char *new;
	int i;
	int j;
	int count;

	new = (char *)s;
	count = ft_count(new, c);
	//printf("the value of count == %d\n", count);
	if (count > 0)
	{
	str = (char **)malloc(sizeof(char*) * count);
	i = 0;
	while (i < count)
	{
		j = 0;
		str[i] = (char *)malloc(sizeof(char));
		while (*new != c)
		{
			str[i][j++] = *new;
			//printf("the value of i is %d\n", i);
			new++;
		}
		while (*new == c)
			new++;
		str[i][j] = '\0';
//		printf("%s\n", str[i]);
		i++;
	}
	}
	return (str);
}

/*int main()
{
//	int i = 0;
	char *str = "*************";
	char **new;
	new = ft_strsplit(str, '*');
	//fprintf(stderr, "is it here???");
	//printf("String is = %s\n", *new);
	return (0);
}*/
