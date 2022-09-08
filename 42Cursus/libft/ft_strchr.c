/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:12:45 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/08 17:20:33 by nrodrigu         ###   ########.fr       */
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

/*int	main(void)
{
	int	c;
	const char str[] ="Nahikiwinki";
	char *solution;	
	c = 'i';	
	solution = ft_strchr(str,c);	
	printf("ft_strchr funcion : %s\n", solution);	
	solution = strchr(str, c);	
	printf("strchr funcion: %s\n", solution);	
	return (0);	
}	*/
