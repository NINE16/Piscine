/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:43:04 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/08 16:04:16 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = a % b;
}

/*int main ()
{
	int div;
	int mod;
	
	ft_div_mod(17,2, &div, &mod);
	printf("%d\n%d\n", div, mod);
}*/
