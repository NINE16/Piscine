/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:30:58 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/10 15:15:57 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	 b;

	a = 1;
	b = 25;
	/*printf("%d\n", a);
	printf("%d\n", b);*/
	ft_swap(&a, &b);
/*	printf("%d\n", a);
	printf("%d\n", b);*/
}


void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
