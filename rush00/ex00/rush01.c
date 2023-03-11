/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:43:28 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/06 17:46:20 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar( char c);

void	draw_line(int len, char a, char b, char c)
{
	int	j;

	j = 0;
	while (j < len)
	{
		if (j == 0)
		{
			ft_putchar(a);
		}
		else if (j == len -1)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(b);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush01(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (i < y)
	{
		if (i == 0)
		{
			draw_line (x, '/', '*', '\\');
		}
		else if (i == y - 1)
		{
			draw_line (x, '\\', '*', '/');
		}
		else
		{	
			draw_line(x, '*', ' ', '*' );
		}
		i++;
	}
}
