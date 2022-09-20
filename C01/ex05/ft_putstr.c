/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:34:17 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/09 08:48:14 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*int	main()
{
	char	 str;
	ft_putstr("Helloooo");
}*/
