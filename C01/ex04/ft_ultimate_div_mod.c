/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:49:52 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/08 16:04:45 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = (*a / *b);
	*b = x % *b;
}
/*int main ()
{
	int a;
	int b;
	a = 17;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d\n", a, b);
}*/
