/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:53:05 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 18:50:46 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función compara el string 1 y el string 2 n número de caracteres. 
En este caso he almacenado los const char en unsigned char.*/
/* La siguiente función busca la diferencia que existe entre los dos string
hasta un determinado número, dando como resultado el primer valor diferente.
Por ejemplo, si la primera frase es "Hola que tal" y la segunda "Hola Que al",
el resultado sería "-32". Por otro lado, si le digo que busque 3 carácteres,
nunca encontrará la diferencia, devolviendome el resultado de null. Asimismo,
obtendremos este resultado si no existiese ninguna diferencia entre ambas */

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
/* int main(void)
{
	const char s1[] = "\200";
	const char s2[] = "\0";
	printf("%d\n", ft_strncmp(s1, s2, 6));
	printf("%d\n", strncmp(s1, s2, 6));
	return (0);
} */