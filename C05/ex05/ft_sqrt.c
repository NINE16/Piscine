/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:53:04 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/22 15:52:03 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	unsigned int	res;

	if ((unsigned int) nb == 0 && (unsigned int) nb == 1)
		return (nb);
	if (nb < 0)
		return (0);
	res = 1;
	while (res * res < (unsigned int)nb)
	{
		res++;
	}
	if (res * res == (unsigned int)nb)
		return (res);
	else
		return (0);
}

/*int main ()
{
	printf("sqrt of %d is %d\n", -1726, ft_sqrt(-1726));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
	printf("sqrt of %d is %d\n", 233753521, ft_sqrt(233753521));
	printf("sqrt of %d is %d\n", 1054916000, ft_sqrt(1054916000));
	printf("sqrt of %d is %d\n", 158004900, ft_sqrt(158004900));
	printf("sqrt of %d is %d\n", 1919189689, ft_sqrt(1919189689));
	printf("sqrt of %d is %d\n", 1011494416, ft_sqrt(1011494416));
	printf("sqrt of %d is %d\n", 2128730780, ft_sqrt(2128730780));
	printf("sqrt of %d is %d\n", 49294441, ft_sqrt(49294441));
	printf("sqrt of %d is %d\n", 1829779281, ft_sqrt(1829779281));
	printf("sqrt of %d is %d\n", 130850721, ft_sqrt(130850721));
	printf("sqrt of %d is %d\n", 122126687, ft_sqrt(122126687));
}*/
