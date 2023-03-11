/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:59:27 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/07 13:08:47 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	dis;

	if (n < 0)
	{
		dis = 'N';
		write(1, &dis, 1);
	}
	else
	{
		dis = 'P';
		write(1, &dis, 1);
	}
}
