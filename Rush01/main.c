/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slosey <slosey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:58:55 by slosey            #+#    #+#             */
/*   Updated: 2021/09/12 11:43:59 by slosey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include "num_checks.h"
#include "constraint_checks.h"
#include "helpers.h"

int	solve_grid(int *grid[6], int row, int col);
int	can_place(int *grid[6], int row, int col, int num);

/* Notre programme va effectuer les opérations suivantes                     */
/*    - Vérifier que l'input du programme soit correct                       */
/*    - Initializer un grid de 6x6 											 */
/*    - Insérer les contraintes reçues dans les bords du grid				 */
/*    - Résoudre le grid et imprimer les 4x4 intérieurs						 */
/* Si un problème surgit dans une de ces étapes, il imprime 'Erreur'         */
int	main(int argc, char *argv[])
{
	int	*grid[6];

	if (argc == 2 && check_constraints(argv[1]))
	{	
		initialize_array(grid);
		fill_constraints(grid, argv[1]);
		if (solve_grid(grid, 1, 1))
		{
			print_grid(grid);
			return (0);
		}
	}
	write(1, "Error\n", 6);
	return (1);
}

/* La fonction solve_grid  va récursivement tenter de résoudre le grid        */
/* Elle utilise la fonction can_place pour savoir si elle peut placer un      */
/* nombre dans la case suivante. Si elle ne peut en placer aucun, elle  	  */
/* "revient en arrière" en retournant false à la fonction solve_grid qui l'a  */
/* appelée (ligne 71), qui va alors essayer un autre num  					  */
/* Si elle parvient à une case après la dernière soit à row 4 col 5, elle est */
/* parvenue a remplir le grid et retourne true successivement jusqu'à son     */
/* premier appel dans main. Si elle n'y parvient pas elle va retourner false. */
int	solve_grid(int *grid[6], int row, int col)
{
	int	num;

	if (row == 4 && col == 5)
		return (true);
	if (col == 5)
	{
		row++;
		col = 1;
	}
	num = 1;
	while (num <= 4)
	{
		if (can_place(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve_grid(grid, row, col + 1))
				return (true);
		}
		grid[row][col] = 0;
		num++;
	}
	return (false);
}

/* La fonction can_place s'assure qu'un nombre 'num' peut être placé dans    */
/* l'emplacement grid[row][col]. Elle contrôle:                              */
/*   - que le nombre est différent de ceux déjà dans le 'row' et 'col' donné */
/*   - si on se trouve au dernier 'row' les contraintes up et down           */
/*   - si on se trouve au dernier 'col' les contraintes left et right        */
/* Elle retourne true (1) si on peut placer le nombre, false (0) sinon.      */
int	can_place(int *grid[6], int row, int col, int num)
{
	if (!check_is_different_number_row(grid, row, num))
		return (false);
	else if (!check_is_different_number_col(grid, col, num))
		return (false);
	else if (row == 4 && !check_col_up_constraint(grid, col, num))
		return (false);
	else if (row == 4 && !check_col_down_constraint(grid, col, num))
		return (false);
	else if (col == 4 && !check_row_left_constraint(grid, row, num))
		return (false);
	else if (col == 4 && !check_row_right_constraint(grid, row, num))
		return (false);
	else
		return (true);
}
