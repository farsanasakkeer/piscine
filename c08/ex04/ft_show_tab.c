/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:24:08 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/23 16:55:48 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include<unistd.h>

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putnbr(int nb)
{
	char	a;

	if (nb <= 9 && nb >= 0)
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

void	ft_show_tab(struct s_stock_str *par)
{
	int		index;

	index = 0;
	while (par[index].str != NULL)
	{
		write (1, par[index].str, par[index].size);
		write (1, "\n", 1);
		ft_putnbr(par[index].size);
		write (1, "\n", 1);
		write (1, par[index].copy, par[index].size);
		write (1, "\n", 1);
		index++;
	}
}
/*int main(int n,char **av)
  {
  struct s_stock_str *structs;
  structs=ft_strs_to_tab( n,av);
  ft_show_tab( structs);
  }
*/
