/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:03:09 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/23 13:58:47 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	(void) argc;
	while (argv[0][i])
	{
		write(1, &argv[0][i++], 1);
	}
	write(1, "\n", 1);
}
