/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 18:37:18 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/19 18:55:08 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (0);
}
/* #include <stdio.h>
 int main()
 {
 	char dest[20] = "123";
	char src[] = "456789";
	unsigned n = 8;

	printf("-----\ndest + %s\nsrc = %s\nn = %d\n", dest, src, n);
	ft_strncat(dest, src, n);
	printf("result = %s\n-----\n", dest);

	return (0);	
 } */
