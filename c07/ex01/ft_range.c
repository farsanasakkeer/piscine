/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:10:00 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/16 14:14:49 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	diff;

	diff = max - min;
	if (diff <= 0)
	{
		return (NULL);
	}
	a = (int *)malloc ((diff) * sizeof (int));
	while (diff > 0)
	{
		a[diff - 1] = max - 1;
		max--;
		diff--;
	}
	return (a);
}
/*int main(void)
{
	int diff = 0;
	int *a = ft_range(4,8);
	printf("\n%d\n",diff);
	while(a[diff])
	{
		printf("%d   ",a[diff]);
		diff++;
	}
}*/
