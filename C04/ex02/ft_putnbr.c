/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:59:21 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/19 12:27:33 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	change;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = (nb * (-1));
	}
	if (nb >= 0 && nb <= 9)
	{
		change = nb + 48;
		write(1, &change, 1);
	}
	else
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}

/*int main(void)
{
	int nb;

	nb = 439875;
	ft_putnbr(nb);
	write (1, "\n", 1);
}*/
