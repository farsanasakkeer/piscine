/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:26:03 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/18 11:18:19 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	*a;
	int	i;

	i = 0;
	diff = max - min;
	if (diff <= 0)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		a = (int *)malloc ((diff) * sizeof (int));
		if (a != NULL)
		{
			while (min < max)
				a[i++] = min++;
			*range = a;
			return (diff);
		}
		else
			return (-1);
	}
}
/*int main(void)
{
	int *a;
	int **range = &a;
	int b  = ft_ultimate_range(range,5,5);
	printf("\nreturn:%d\n",b);
	b=0;
	while(a[b] )
	{
		printf("    %d   ",a[b]);
		b++;
	}

}*/
