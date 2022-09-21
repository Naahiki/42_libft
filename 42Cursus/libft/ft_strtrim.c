/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:15:28 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 18:34:04 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Elimina todos los caracteres de la string 'set' esde el principio y desde
 * el final de 's1', hasta encontrar un caracter no perteneciente a 'set'.
 * La string resultante se devuelve con una reserva de malloc(3)*/

#include "libft.h"

/*static int	ft_checkset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}*/

/*char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	while (s1[start] && ft_checkset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_checkset(s1[end - 1], set))
		end--;
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}*/

/*int  main(void)
{
   char    s1[] = "lorem ipsum dolor sit amet";
   char    *set;
   size_t  i;
   size_t  j;
   char    *strtrim;

   set = "m ";
   printf("Valor Start: %zu\n", i);
   printf("Valor End: %zu\n", j);
   strtrim = ft_strtrim(s1, set);
   printf("%s\n", strtrim);
}
*/

/* ******************************* DEFINICION ******************************/

/* La función strtrim elimina los primeros y últimos carácteres de la string
s1 si contiene los mismos caracteres de set. */

/* ******************************* COMO SE HACE *****************************/

/* Se usa strchr para seleccionar el primer y último valor igual en la s1.
 Asimismo,se incluye (i < j) para que si hay un s1 = "   " 
 y set = " ", no produzca error.Por último, se retorna substr para 
 que retorne s1 desde los puntos que me han dado strchr. 
 Se incluye en el último valor de esta función (j - i + 1) para que te de
el valor total del string final, y el más uno ya que hay que añadir un caracter
más. */

/* ********************************* EJEMPLO ********************************/
/*
	- S1 = "hola que tal"
	- set = "hel"
	resultado = ola que ta
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i < j)
		i++;
	while (ft_strchr(set, s1[j]) && i < j)
		j--;
	return (ft_substr(s1, i, j - i + 1));
}

/* int main(void)
{
	char const s1[] = "       ";
	char const set[] = "  ";
	printf("mi funcion:%s\n", ft_strtrim(s1, set));
	return (0);
} */