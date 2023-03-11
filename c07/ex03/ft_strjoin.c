/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:51:26 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/19 14:15:20 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
//#include<stdio.h>

int		g_j;
int		g_sep_i;
char	*g_jstr;
int		g_i = 0;
int		g_k = 0;
int		g_i1 = 0;
int		g_k1 = 0;

int	str_len(int size, char **strs, char *sep)
{
	while (g_i1 < size)
	{
		g_j = 0;
		while (strs[g_i1][g_j])
		{
			g_k1++;
			g_j++;
		}
		g_sep_i = 0;
		g_i1++;
		if (g_i != size)
		{
			while (sep[g_sep_i])
			{
				g_k1++;
				g_sep_i++;
			}
		}
	}
	return (g_k1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	str_len(size, strs, sep);
	g_jstr = (char *)malloc(g_k1 * sizeof(char));
	while (g_i < size)
	{
		g_j = 0;
		while (strs[g_i][g_j])
			g_jstr[g_k++] = strs[g_i][g_j++];
		g_sep_i = 0;
		g_i++;
		if (g_i != size)
		{
			while (sep[g_sep_i])
				g_jstr[g_k++] = sep[g_sep_i++];
		}
	}
	g_jstr[g_k] = '\0';
	return (g_jstr);
}
/*int main (void)
{
	int size = 4,i;

	char *sep="-";
	char *strs[]={"abc","d5ef","123","456789","klm","gyih","123"};

	printf("\n");
	for(i=0;i<7;i++)
	{
		printf("%s ",strs[i]);
	}
	printf("\n\nsep : %s\n\n",sep);
	printf("size : %d\n\n",size);
	printf("Result : %s\n\n",ft_strjoin( size, strs, sep));
	return(0);
}*/
