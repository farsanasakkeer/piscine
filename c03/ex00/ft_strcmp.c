/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:02:56 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/21 19:58:09 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
//#include<string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	c;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	c = s1[i] - s2[i];
	return (c);
}
int main(int n, char **arg)
{
//	char s1[],s2[];
	//printf("\n%d",strcmp(s1,s2));
//	int i = 0;
	

	if (n==3)
	{
		//printf("%c",arg[1][0]);

	printf("\n%d\n\n",ft_strcmp(arg[1],arg[2]));
	}
	return (0);
	
}
