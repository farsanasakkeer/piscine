/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:58:24 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/14 18:29:29 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	while (nb > 1)
	{
		n = n * nb;
		nb--;
	}
	if (nb == 1)
	{
		return (n * nb);
	}
	if (nb == 0)
		return (1);
	return (0);
}
/*int main(void)
{
	printf("\n%d\n\n",ft_iterative_factorial(-1));
}*/
