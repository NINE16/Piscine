/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:35:00 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/17 12:40:33 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i > n)
	{	
		dest[i] = '\0';	

		i++;	
	}
	return (dest);
}

int main ()
{
	char	dest[25]= "ab";
	char	src[25] = "dfgdfg";

	ft_strncpy(dest, src, 1);
	printf("%s\n%s\n", src, dest);
}
