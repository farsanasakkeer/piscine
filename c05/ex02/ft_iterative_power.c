/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:22:22 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/14 21:19:18 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	if (power == 1)
	{
		return (result);
	}
	return (0);
}
/*int main (void)
{
	printf("\n%d\n\n",ft_iterative_power(2,-10));
}*/
