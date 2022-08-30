/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:28:11 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/13 13:18:07 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				|| ((str[i] >= 'A' && str[i] <= 'Z'))
			i++;
			else
				return (0);
		}	
		return (1);
	}
	else
	{
		return (1);
	}
}

/*int	main(void)
{
	int	n;
	char c[]= "";
	n = ft_str_is_alpha(c);
	printf("%d\n", n);
}*/
