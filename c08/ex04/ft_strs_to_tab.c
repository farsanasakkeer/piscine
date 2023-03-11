/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:34:42 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/23 11:39:37 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include<stdlib.h>
//#include<stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
	{
		i++;
	}
	dest = (char *)malloc ((i + 1) * sizeof (char ));
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*data;
	int					i;
	int					j;

	i = 1;
	if (ac > 1)
	{
		data = malloc (sizeof (t_stock_str) * (ac + 1));
		if (data != NULL )
		{	
			while (av[i])
			{
				j = 0;
				data[i - 1].str = av[i];
				data[i - 1].copy = ft_strdup(av[i]);
				while (av[i][j])
					j++;
				data[i - 1].size = j;
				i++;
			}
			data[i - 1] = (struct s_stock_str){0, 0, 0};
			return (data);
		}
	}
	return (0);
}
/*int main(int n,char **av)
  {
  struct s_stock_str *structs;
  int index=0;

  structs=ft_strs_to_tab( n,av);
  while(index < n )
  {
  printf("\n");
  printf("st : %s\t\tcopy : %s\t\t", structs[index].str, structs[index].copy);
  printf("size : %d\n", structs[index].size);
  index++;
  }
  return (0);
}*/
