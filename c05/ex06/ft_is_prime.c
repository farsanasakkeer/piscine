/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:51:25 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/15 17:27:01 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb > 2)
	{
		while (n < nb)
		{
			if ((nb % n) == 0)
				return (0);
			else
				n++;
		}
	}
	if (nb == n)
	{
		return (1);
	}
	return (0);
}
/*int main(void)
{
	printf("\n%d\n\n",ft_is_prime(11));
}*/
