/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:05:17 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/21 20:07:51 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
int main(int n,char **arg)
{

//	char s1[]="35iygdsk",s2[]="35iyg";
	int nb;
	nb= atoi(arg[3]);
	if (n==4)
	{
	printf("\n%d\n\n",ft_strncmp(arg[1],arg[2],nb));
	}
	return(0);
}
