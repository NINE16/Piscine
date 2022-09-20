/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint_checks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slosey <slosey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:17:32 by slosey            #+#    #+#             */
/*   Updated: 2021/09/12 11:43:46 by slosey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Ces fonctions controlent que les contraintes de chaque type sont remplies */
/* Retournent true (1) si les contraintes sont remplies, false (0) sinon     */
int	check_col_up_constraint(int *grid[6], int col, int num)
{
	int	x;
	int	can_see_count;
	int	highest;
	int	current;

	x = 2;
	can_see_count = 1;
	highest = grid[1][col];
	while (x <= 4)
	{
		current = grid[x][col];
		if (current == 0)
			current = num;
		if (current > highest)
		{
			can_see_count++;
			highest = grid[x][col];
		}
		x++;
	}
	return (can_see_count == grid[0][col]);
}

int	check_col_down_constraint(int *grid[6], int col, int num)
{
	int	x;
	int	can_see_count;
	int	highest;
	int	current;

	x = 3;
	can_see_count = 1;
	highest = grid[4][col];
	if (highest == 0)
		highest = num;
	while (x >= 1)
	{
		current = grid[x][col];
		if (current == 0)
			current = num;
		if (current > highest)
		{
			can_see_count++;
			highest = grid[x][col];
		}
		x--;
	}
	return (can_see_count == grid[5][col]);
}

int	check_row_left_constraint(int *grid[6], int row, int num)
{
	int	x;
	int	can_see_count;
	int	highest;
	int	current;

	x = 2;
	can_see_count = 1;
	highest = grid[row][1];
	while (x <= 4)
	{			
		current = grid[row][x];
		if (current == 0)
			current = num;
		if (current > highest)
		{
			can_see_count++;
			highest = grid[row][x];
		}
		x++;
	}
	return (can_see_count == grid[row][0]);
}

int	check_row_right_constraint(int *grid[6], int row, int num)
{
	int	x;
	int	can_see_count;
	int	highest;
	int	current;

	x = 3;
	can_see_count = 1;
	highest = grid[row][4];
	if (highest == 0)
		highest = num;
	while (x >= 1)
	{
		current = grid[row][x];
		if (current == 0)
			current = num;
		if (current > highest)
		{
			can_see_count++;
			highest = grid[row][x];
		}
		x--;
	}
	return (can_see_count == grid[row][5]);
}
