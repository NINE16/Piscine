/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 09:14:26 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/23 13:19:09 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	n = nb;
	while (n > 1 )
	{
		nb = nb * (n - 1);
		n--;
	}
	return (nb);
}
int main ()
{
	printf("%d\n",ft_iterative_factorial(-7));
}
