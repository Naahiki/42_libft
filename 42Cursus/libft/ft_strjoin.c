/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:31:06 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/19 12:49:42 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Une la string s1 junto a la s2.Primero coloca la s1 y posteriormente la s2,
// finalizando con un '\0'//
// si s1 o s2 esta vacio devuelve NULL//
// Creo variables y hago la funcion de seguridad --> if !s1 o !s2 NULL//
// Pongo contador en los dos string con la funcion strlen y doy valores a las 
//variables para recorrer el string x=-1 la comienzo en -1 por que 0 me da error
// creo el malloc y la funcion de seguridad de malloc --> NULL//
// Mientras el string *s1 partiendo de la posicion 0//
// Igualo mi string(malloc) con el string de la funcion y que corra i (i++)//
// Mientras el string s2 poniendo la x a 0//
//  igualo mi string y que corra la i con s2, cierro mi string y lo retorno//
// La funcion suma los 2 strings, s1 + s2 y da como resultado el mio str1//

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	y1;
	unsigned int	y2;
	unsigned int	i;
	unsigned int	x;
	char			*str1;

	if (!s1 || !s2)
		return (NULL);
	y1 = ft_strlen(s1);
	y2 = ft_strlen(s2);
	i = 0;
	x = -1;
	str1 = malloc (sizeof(char) * (y1 + y2 + 1));
	if (!str1)
		return (NULL);
	while (s1[i])
	{
		str1[i] = s1[i];
		i++;
	}
	while (s2[++x])
		str1[i++] = s2[x];
	str1[i] = '\0';
	return (str1);
}

/*int	main(void)
{
	char	lehengoa[] = "Nahikari Rodriguez";
	char bigarrena[]= "Nogales Dominguez";
	printf ("%s\n", ft_strjoin(lehengoa,bigarrena));
	return (0);
}*/
