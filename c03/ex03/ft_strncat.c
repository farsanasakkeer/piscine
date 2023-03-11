/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvaliyak <farsanasakkeer777@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:38:46 by fvaliyak          #+#    #+#             */
/*   Updated: 2022/08/12 15:01:01 by fvaliyak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int				j;
	unsigned int	n;

	i = 0;
	j = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(void)
{
	char src[10]="123456789",dest[200]="zzzz";
	printf("\n%s\n\n",ft_strncat(dest,src,5));
}*/
