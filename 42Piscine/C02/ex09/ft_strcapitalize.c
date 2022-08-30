/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:29:36 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/16 19:28:35 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		else if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			|| (str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		else if ((str[i - 1] < 'A' || str[i - 1] > 'Z')
			|| (str[i - 1] < 'a' || str[i - 1] > 'z')
			|| (str[i - 1] < '0' || str[i - 1] > '9'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
