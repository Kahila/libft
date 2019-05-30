/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:22:42 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/30 11:04:08 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_itoa(int n)
{

	int count;
	int i;
	int j = 0;
	int temp;
	int allocated = 0;
	char *val;
	int zero;
	while (n > 0)
	{
		count = n;
		i = 0;
		temp = 1;

		while (count > 0)
		{
			i++;
			count /= 10;
			printf("works %d\n", i);
		}
		if (allocated == 0)
		{
			printf("alocated\n");
			allocated = 1;
			val = (char *)malloc((i + 1) * sizeof(char));
		}

		while (i > 1)
		{
			temp *= 10;
			i--;
			//printf("temp = %d\n", temp);
		}
		val[j] =  n / (temp) + '0';
		n = n - ((temp) * (n / temp));
		//val++;
		j++;
		
	}
	val[j] = '\0';
	printf("\n====%s\n", val);
	return (val);
}

#include <stdio.h>

int main()
{
	int inti = 16076;
	printf("%s\n", ft_itoa(inti));
	return (0);
}
