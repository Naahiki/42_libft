/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:38:19 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 18:55:01 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función memcmp compara la cadena de bytes s1 con la cadena de bytes
s2. Se supone que ambas cadenas tienen una longitud de n bytes. La función
memcmp devuelve cero si las dos cadenas son idénticas, en caso contrario
devuelve la diferencia entre los dos primeros bytes que difieren (tratados
como valores unsigned char, de modo que `\200' es mayor que "0",por ejemplo).
Las cadenas de longitud cero son siempre idénticas. Este comportamiento no es
requerido por C y el código portable debería depender únicamente del signo
del valor devuelto. */

/* igual que strcmp*/
/* la segunda vez casteo directamente sin variables*/
#include "libft.h"

/*int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	i = 0;
	str1 = ((unsigned char *)s1);
	str2 = ((unsigned char *)s2);
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
		n--;
		s1++;
		s2++;
	}
	return (0);
}

/* int main(void)
{
	const char s1[] = "nahiki";
	const char s2[] = "nahika";
	printf("%d\n", ft_memcmp(s1, s2, 6));
	printf("%d\n", memcmp(s1, s2, 6));
	return (0);
} */
