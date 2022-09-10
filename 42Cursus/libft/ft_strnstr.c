/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:08:52 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/10 11:35:11 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* → Busca una subcadena (needle) en una cadena de texto (haystack) en 
los primeros len caracteres.
Hace referencia a buscar una aguja (needle) en un pajar (haystack).*/
/* si needle es nul devuelvehaystack, linea 27*/
/*Mientras haya paja y que haya sea menor que l*/
/*duda i +j, linea 34*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char paja[] = "Nahikari Rodriguez Nogales Dominguez";
	const char aguja[] = "guez";
	size_t c = '7';
	printf("%s", ft_strnstr(paja,aguja,c));
}*/