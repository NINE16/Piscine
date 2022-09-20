/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:40:20 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/19 16:09:17 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	minus;

	i = 0;
	minus = 1;
	result = 0;
	while (((str[i] != '\0') && (str[i] == '\t')) || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r')
		|| (str[i] == ' '))
		i++;
	while ((str[i] != '\0' && (str[i] == '-')) || (str[i] == '+'))
	{
		if (str[i] == '-')
			minus = minus * (-1);
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10;
		result = result + (str[i] - 48);
		i++;
	}
	return (result * minus);
}

/*int main ()
{
	char str[] = "  ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
}*/
