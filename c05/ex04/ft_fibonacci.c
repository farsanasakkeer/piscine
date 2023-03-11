/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:20:43 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/18 15:18:19 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	ft_fibonacci(int index)
{
	int	fib;

	fib = 0;
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
		return (1);
	if (index > 1)
	{
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	}
	return (-1);
}
int main(void)
{
	printf("\nfib:%d\n\n",ft_fibonacci(5));
}
