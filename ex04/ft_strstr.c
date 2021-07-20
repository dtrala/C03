/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 18:59:50 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/19 19:36:39 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *look)
{
	int		i;
	int		j;

	i = 0;
	if (look[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == look[j] && str[i + j] != '\0')
		{
			if (look[j + i] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/* #include <stdio.h>
 
int main ()
{
	char str[] = "01234566789";\
	char look[] = "456";

	printf("-----\nstr = %s\nlook = %s\n", str, look);
	printf("%s\n", ft_strstr(str, look));

	return (0);
}*/
