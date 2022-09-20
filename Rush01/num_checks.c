/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_checks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slosey <slosey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:22:22 by slosey            #+#    #+#             */
/*   Updated: 2021/09/12 11:43:50 by slosey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

/* Ces fonctions controlent que les nombres sur row ou col sont différents */
/* Retournent true (1) si ils sont différents, false (0) sinon             */
int	check_is_different_number_row(int *grid[6], int row, int num)
{
	int	x;

	x = 1;
	while (x <= 4)
	{
		if (grid[row][x] == num)
			return (false);
		x++;
	}
	return (true);
}

int	check_is_different_number_col(int *grid[6], int col, int num)
{
	int	x;

	x = 1;
	while (x <= 4)
	{
		if (grid[x][col] == num)
			return (false);
		x++;
	}
	return (true);
}
