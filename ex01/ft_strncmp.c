/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 17:41:18 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/19 20:27:55 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diag;

	i = 0;
	diag = 0;
	while ((i < n) && !diag && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		diag = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (i < n && !diag && (s1[i] == '\0' || s2[i] == '\0'))
		diag = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (diag);
}
