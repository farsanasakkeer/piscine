/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:30:58 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/18 10:59:05 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_find_next_prime(int nb)
{
	int	n;

	n = 2;
	if (nb > 2)
	{
		while (n <= (nb / 2))
		{
			if ((nb % n) == 0)
			{
				nb ++;
				n = 2;
			}
			else
				n++;
		}
	}
	return (nb);
}
//int main(void)
//{
//	printf("\n%d\n\n",ft_find_next_prime(135784));
//}
