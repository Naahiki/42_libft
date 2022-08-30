/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:23:07 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/11 12:26:24 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen (char *str)
{
	int i;
	i = 0;
	while (str[i] != 0)
	i++;
		return (i);
}

int main(void)
{
	char *string;
	int n;
	string = "Hola Leo";
	n = ft_strlen(string);
	printf("%d",n);
	return(0);
}
