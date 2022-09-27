/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:54:20 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/09/21 18:49:08 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Esta funcion añade una cadena al final de la otra*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest;
	size_t	orig;
	size_t	i;

	i = 0;
	dest = ft_strlen(dst);
	orig = ft_strlen(src);
	if (size <= dest)
		return (size + orig);
	while (i < (size - dest - 1) && src[i])
	{
		dst[dest + i] = src[i];
		i++;
	}
	dst[dest + i] = '\0';
	return (dest + orig);
}

/*int main(void)
{
	char dst[7] = "a";
	char dst2[7] = "a";
	char src[] = "lorem ipsum dolor sit amet";
	printf("len= %zu y dst= %s\n", ft_strlcat(dst, src, 0), dst);
	printf("len= %zu y dst= %s\n", strlcat(dst2, src, 0), dst2);
	return (0);
}*/
