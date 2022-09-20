/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:31:14 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/22 16:16:59 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

/*int main()
{
	printf("%d ^ %d = %d\n", 3645, -2002, ft_iterative_power(3645, -2002));
	printf("%d ^ %d = %d\n", 0, 0, ft_iterative_power(0, 0));
	printf("%d ^ %d = %d\n", 4154, 0, ft_iterative_power(4154, 0));
	printf("%d ^ %d = %d\n", -733, 1, ft_iterative_power(-733, 1));
	printf("%d ^ %d = %d\n", 1, 2, ft_iterative_power(1, 2));
	printf("%d ^ %d = %d\n", 6, 3, ft_iterative_power(6, 3));
	printf("%d ^ %d = %d\n", 7, 5, ft_iterative_power(7, 5));
	printf("%d ^ %d = %d\n", -8, 6, ft_iterative_power(-8, 6));
	printf("%d ^ %d = %d\n", -6, 8, ft_iterative_power(-6, 8));
	printf("%d ^ %d = %d\n", -5, 9, ft_iterative_power(-2, 9));
	printf("%d ^ %d = %d\n", -1, 10, ft_iterative_power(-1, 10));
}*/