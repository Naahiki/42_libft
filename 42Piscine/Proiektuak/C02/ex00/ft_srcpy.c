/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:21:28 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/13 12:52:13 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src);

/*int	main(void)
{
	char	source[] = "Source string.";
	char 	destin[] = "Destination string.";
	char 	*dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);
    dest = ft_strcpy(destin, source);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}*/
