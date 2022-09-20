/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint_checks.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slosey <slosey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:18:24 by slosey            #+#    #+#             */
/*   Updated: 2021/09/11 20:07:53 by slosey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONSTRAINT_CHECKS_H
# define CONSTRAINT_CHECKS_H

int	check_col_up_constraint(int *grid[6], int col, int num);
int	check_col_down_constraint(int *grid[6], int col, int num);
int	check_row_left_constraint(int *grid[6], int row, int num);
int	check_row_right_constraint(int *grid[6], int row, int num);

#endif