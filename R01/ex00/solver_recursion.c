/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_recursion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:36:12 by alyap             #+#    #+#             */
/*   Updated: 2022/02/21 10:07:36 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
void	ft_print_matrix(int matrix[4][4]);
int		ft_duplicate_check(int table[4][4], int boxes, int height);
int		ft_clues_check(int table[4][4], int boxes, int clues[16]);
int		left_clue_clash(int table[4][4], int boxes, int clues[16]);
int		right_clue_clash(int table[4][4], int boxes, int clues[16]);
int		top_clue_clash(int table[4][4], int boxes, int clues[16]);
int		bottom_clue_clash(int table[4][4], int boxes, int clues[16]);

int	ft_solver(int table[4][4], int clues[16], int boxes)
{
	int	building_height;

	if (boxes == 16)
		return (1);
	building_height = 1;
	while (building_height <= 4)
	{
		if (ft_duplicate_check(table, boxes, building_height) == 0)
		{
			table[boxes / 4][boxes % 4] = building_height;
			if (ft_clues_check(table, boxes, clues) == 0)
			{
				if (ft_solver(table, clues, boxes + 1) == 1)
					return (1);
			}
			else
			{
				table[boxes / 4][boxes % 4] = 0;
			}
		}
		building_height++;
	}
	return (0);
}

int	ft_duplicate_check(int table[4][4], int boxes, int height)
{
	int	column_checker;
	int	row_checker;

	column_checker = 0;
	while (column_checker < (boxes / 4))
	{
		if (table[column_checker][boxes % 4] == height)
			return (1);
		column_checker++;
	}
	row_checker = 0;
	while (row_checker < (boxes % 4))
	{
		if (table[boxes / 4][row_checker] == height)
			return (1);
		row_checker++;
	}
	return (0);
}
