/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:17:15 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/23 19:39:00 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reserva (utilizando malloc(3)) un array de strings resultante de separar la
 *  string s en substrings utilizando el caracter c como delimitador.
 *   El array debe terminar con un puntero NULL.*/
/* PARAMETROS:*/
/* char const *s, es la cadena que va a delimitar cada subcadena.*/
/*  char c, es el caracter que va a delimitar cada subcadena*/
/* Si falla reserva memoria--NULL*/
/*Si c no aparece en s --> Devuelve la cadena s en la posicion [0] e la matriz*/
/* Si c aparece en s -->Devuelve una matriz de los segmentos que haya.*/

#include "libft.h"

static int	ft_checkjumps(char const *s, char c)
{
	unsigned int	i;
	unsigned int	jumps;

	jumps = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			jumps++;
			continue ;
		}
		i++;
	}
	return (jumps);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	i;
	unsigned int	start;
	unsigned int	j;

	str = (char **)malloc(sizeof(char *) * (ft_checkjumps(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			str[j] = ft_substr(s, start, i - start);
			j++;
			continue ;
		}
		i++;
	}
	str[j] = NULL;
	return (str);
}

/*int main(void)
{
	char const s[] = "  hola  que pasa";
	char c;
	char **result;
	c = 'a';
	result = ft_split(s, c);
	int check = -1;
	while (result[++check])
		printf("line [%d] -> %s\n", check, result[check]);
	//printf("%s", ft_split(s, c));
	return (0);
} */