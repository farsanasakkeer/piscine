/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:50:30 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/14 13:39:04 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	a;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr (-nb);
	}
	else if (nb <= 9 && nb >= 0)
	{
		a = nb + '0';
		write(1, &a, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
/*int		main(void)
{
ft_putnbr(2);
printf("\n");
ft_putnbr(-4242);
printf("\n");
ft_putnbr(20000706);
printf("\n");
ft_putnbr(+2147483647);
printf("\n");
ft_putnbr(-2147483648);
}*/
