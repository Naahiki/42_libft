/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:12:45 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 18:47:36 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Busca la primera coincidencia de cierto carácter dentro de una cadena de
texto.Permite buscar carateres y patrones de caracteres en cadenas; 
localiza la primera ocurrencia de un caracter c en una cadena s.
 La busqueda termina en la primera 
ocurrencia de un caracter coincidente.*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&str[i]);
	return (NULL);
}

/*int main(void)
{
	const char s[] = "hola que tal";
	int c;
	c = '\0';
	printf("%s \n", ft_strchr(s, c));
	printf("%s", strchr(s, c));
	return (0);
}*/