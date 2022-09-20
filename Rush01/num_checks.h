/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_checks.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slosey <slosey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:22:34 by slosey            #+#    #+#             */
/*   Updated: 2021/09/12 11:11:29 by slosey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUM_CHECKS_H
# define NUM_CHECKS_H

int	check_is_different_number_row(int *grid[6], int row, int num);
int	check_is_different_number_col(int *grid[6], int col, int num);

#endif