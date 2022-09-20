/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:09:07 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/09 08:37:21 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <unistd.h>

int	ft_strlen(char *str)
{	
	int	i;

	i = 0;
	{
		while (str[i] != '\0')
		{
			i++;
		}
		return (i);
	}
}
/*int main (void)
{	
	printf("%d\n",ft_strlen("dfgfhgf"));
	return(0);
}*/
