/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 18:14:25 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/19 18:36:08 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	numb;

	numb = 0;
	while (*str != '\0')
	{
		numb++;
		str++;
	}
	return (numb);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;

	i = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
/* #include<stdio.h> 
int main(void)
{
	char dest[20] ="Hello";
	char src[] = ", world!";

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n-----\n", dest);

	return (0);
}*/
