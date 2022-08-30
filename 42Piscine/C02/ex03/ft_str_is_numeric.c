/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:00:07 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/13 13:43:50 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= '0' && str[i] <= '9')
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
