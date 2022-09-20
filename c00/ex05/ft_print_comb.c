/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 09:58:22 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/04 16:37:59 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_number(char a, char b, char c);

void	ft_print_comb(void)
{	
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		 b = a + 1;
		 while (b <= '8')
		{	
			c = b + 1;
			while (c <= '9')
			{	
				ft_print_number(a, b, c);
				if (a != '7')
				{
					write (1, ", ", 2);
				}
				c++;
			}
			b++;
		}	
		a++;
	}
}

void	ft_print_number(char a, char b, char c)

{	
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}
