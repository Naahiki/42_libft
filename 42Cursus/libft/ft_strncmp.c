/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:53:05 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/08 18:07:45 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función compara el string 1 y el string 2 n número de caracteres. 
En este caso he almacenado los const char en unsigned char.*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] != '\0' || str2[i] != '\0') && (i < n))
	{
		if (str1[i] < str2[i])
		{
			return (str1[i] - str2[i]);
		}
		else if (str1[i] > str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

/*int main(void)
{
	printf("%d", ft_strncmp("Nahikari", "HoLaNNNNNNNN", 5));
}
*/