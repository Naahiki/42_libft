/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:30:31 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 18:52:34 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Busca la ultima coincidencia de cierto caracter dentro de una cadena de text
Localiza la ultima ocurrencia del patron c en la cadena s.
La busqueda se realiza en sentido inverso, 
desde el último carácter de la cadena al primero; 
termina con la primera ocurrencia de un carácter coincidente. 
Si no se encuentra el carácter c en la cadena s, 
la función produce un resultado NULL.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	i++;
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
			i--;
	}
	return (NULL);
}

/* int main(void)
{
	const char s[] = "abbbbbbbbb";
	int c;
	c = 'a' + 1024;
	printf("%s \n", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
	return (0);
} */