/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:06:29 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/08 11:07:28 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*int main(void)
{
	int ptr1=1,ptr2=2;
	printf("%d%d",ptr1,ptr2);
	ft_swap(&ptr1,&ptr2);
	printf("\n%d%d",ptr1,ptr2);
}*/
