/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:45:58 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/14 20:05:56 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
	{
		return (1);
	}
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
/*int main(void)
{
	printf("\n%d\n\n",ft_recursive_factorial(-1));
}*/
