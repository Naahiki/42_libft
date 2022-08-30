/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:13:54 by mgros-al          #+#    #+#             */
/*   Updated: 2022/07/13 10:59:21 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int n;
	unsigned int i;

	n = 0;
	i = 0;
	while (src[n] != '\0')
		n++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (n);
}

/* int main (void)
{
	char n[];
	char c[];
	n = "nahikari";
	c ="sagutxo";
	printf("%u", ft_strlcpy(n, c, 4));
}*/
