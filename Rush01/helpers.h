/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slosey <slosey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:16:16 by slosey            #+#    #+#             */
/*   Updated: 2021/09/11 20:07:53 by slosey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_H
# define HELPERS_H

void	print_grid(int *grid[6]);
int		check_constraints(char *constraints);
void	fill_constraints(int *grid[6], char *constraints);
void	initialize_array(int *grid[6]);

#endif