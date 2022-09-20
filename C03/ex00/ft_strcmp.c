/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:30:08 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/16 09:36:11 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		 i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main()
{
	char test1[] = "Hello";
	char test2[] = "Heulo";

	printf("%d\n", ft_strcmp(test1, test2));
}*/
