/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:15:28 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/18 14:10:05 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Elimina todos los caracteres de la string 'set' esde el principio y desde
 * el final de 's1', hasta encontrar un caracter no perteneciente a 'set'.
 * La string resultante se devuelve con una reserva de malloc(3)*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

static int	ft_checkset(char c, char const *set)
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
}

char	*ft_strtrim(char const *s1, char const *set)
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
}

/*int  main(void)
{
   char    s1[] = "lorem ipsum dolor sit amet";
   char    *set;
   size_t  i;
   size_t  j;
   char    *strtrim;

   set = "l ";
   i = ft_sizefront(s1, set);
   j = ft_sizeend(s1, set);
   printf("Valor Start: %zu\n", i);
   printf("Valor End: %zu\n", j);
   strtrim = ft_strtrim(s1, set);
   printf("%s\n", strtrim);
}*/

