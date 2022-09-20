/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slosey <slosey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:15:59 by slosey            #+#    #+#             */
/*   Updated: 2021/09/12 11:43:41 by slosey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

/* La fonction initialize_array initialise notre tableau de pointeurs       */
/* Elle appele malloc 6 fois, pour allouer 6 * 4 bytes (= 1 int) de mémoire */
/* Par défaut, la valeur allouée dans chaque grid[row][col] est un int 0    */
void	initialize_array(int *grid[6])
{
	int	i;

	i = 0;
	while (i <= 6)
	{
		grid[i] = (int *) malloc(6 * 4);
		i++;
	}
}

/* La fonction print_grid va imprimer le grid dans le format demandé */
void	print_grid(int *grid[6])
{
	int	row;
	int	col;
	int	to_print;

	row = 1;
	col = 1;
	while (row <= 4)
	{
		while (col <= 4)
		{
			to_print = grid[row][col] + 48;
			write(1, &to_print, 1);
			if (col != 4)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		col = 1;
		row++;
	}
}

/* La fonction check_constraints s'assure que l'input est correct */
/* Elle controle qu'il sagisse d'une chaine de 30 charactères,    */
/* avec 16 char entre 1 et 4, et 15 espaces entre ceux-ci         */
int	check_constraints(char *constraints)
{
	int	i;

	i = 0;
	while (constraints[i])
	{
		if (i % 2 == 0 && !(constraints[i] >= '1' && constraints[i] <= '4'))
			return (false);
		if (i % 2 == 1 && constraints[i] != ' ')
			return (false);
		i++;
	}
	if (i != 31)
		return (false);
	return (true);
}

/* La fonction fill_constraints rempli les bords du grid avec l'input argv[1] */
/* Pour la contrainte col1up le premier chiffre reçu dans argv[1\ sera stocké */
/* à grid[0][1], comme dans le tableau de l'annexe 1, sous forme d'int (-48)  */
void	fill_constraints(int *grid[6], char *constraints)
{
	grid[0][1] = constraints[0] - 48;
	grid[0][2] = constraints[2] - 48;
	grid[0][3] = constraints[4] - 48;
	grid[0][4] = constraints[6] - 48;
	grid[5][1] = constraints[8] - 48;
	grid[5][2] = constraints[10] - 48;
	grid[5][3] = constraints[12] - 48;
	grid[5][4] = constraints[14] - 48;
	grid[1][0] = constraints[16] - 48;
	grid[2][0] = constraints[18] - 48;
	grid[3][0] = constraints[20] - 48;
	grid[4][0] = constraints[22] - 48;
	grid[1][5] = constraints[24] - 48;
	grid[2][5] = constraints[26] - 48;
	grid[3][5] = constraints[28] - 48;
	grid[4][5] = constraints[30] - 48;
}
