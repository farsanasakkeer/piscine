/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:59:58 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/07 13:06:51 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	commas_i1(char i1)
{
	if (i1 != '7' )
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i1;
	int	i2;
	int	i3;

	i1 = '0';
	while (i1 <= '7' )
	{
		i2 = i1 + 1;
		while (i2 <= '8' )
		{
			i3 = i2 + 1;
			while (i3 <= '9' )
			{
				write(1, &i1, 1);
				write(1, &i2, 1);
				write(1, &i3, 1);
				commas_i1(i1);
				i3++;
			}
			i2++;
		}
		i1++;
	}
}
