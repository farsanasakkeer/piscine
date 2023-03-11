/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:15:08 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/15 15:40:56 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_sqrt(int nb)
{
	int	n;
	int	minus_val;

	n = 0;
	minus_val = 1;
	while (nb > 0)
	{
		nb = nb - minus_val;
		minus_val = minus_val + 2;
		n++;
	}
	if (nb == 0)
	{
		return (n);
	}
	return (0);
}
/*int main(void)
{
	printf("%d\n",ft_sqrt(121));
}*/
