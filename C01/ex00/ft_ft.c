/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testpoint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 12:32:31 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/10 10:30:05 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

void	ft_ft(int *nbr);

/*int	main(void)
{
	int	number;

	number = 62
	ft_ft(&number);
	printf("%d\n", number);
}*/
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
