/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_recursion2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:36:12 by alyap             #+#    #+#             */
/*   Updated: 2022/02/21 10:07:53 by wricky-t         ###   ########.fr       */
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

int	ft_clues_check(int table[4][4], int boxes, int clues[16])
{
	if ((left_clue_clash(table, boxes, clues) == 1)
		|| (right_clue_clash(table, boxes, clues) == 1)
		|| (top_clue_clash(table, boxes, clues) == 1)
		|| (bottom_clue_clash(table, boxes, clues) == 1))
		return (1);
	else
		return (0);
}

int	left_clue_clash(int table[4][4], int boxes, int clues[16])
{
	int	counter;
	int	memory_max_height;
	int	see_counter;

	counter = 0;
	memory_max_height = 0;
	see_counter = 0;
	if (boxes % 4 == 3)
	{
		while (counter < 4)
		{
			if (table[boxes / 4][counter] > memory_max_height)
			{
				memory_max_height = table[boxes / 4][counter];
				see_counter++;
			}
			counter++;
		}
		if (clues[8 + (boxes / 4)] != see_counter)
			return (1);
	}
	return (0);
}

int	right_clue_clash(int table[4][4], int boxes, int clues[16])
{
	int	counter;
	int	memory_max_height;
	int	see_counter;

	counter = 3;
	memory_max_height = 0;
	see_counter = 0;
	if (boxes % 4 == 3)
	{
		while (counter >= 0)
		{
			if (table[boxes / 4][counter] > memory_max_height)
			{
				memory_max_height = table[boxes / 4][counter];
				see_counter++;
			}
			counter--;
		}
		if (clues[12 + boxes / 4] != see_counter)
			return (1);
	}
	return (0);
}

int	top_clue_clash(int table[4][4], int boxes, int clues[16])
{
	int	counter;
	int	memory_max_height;
	int	see_counter;

	counter = 0;
	memory_max_height = 0;
	see_counter = 0;
	if (boxes / 4 == 3)
	{
		while (counter < 4)
		{
			if (table[counter][boxes % 4] > memory_max_height)
			{
				memory_max_height = table[counter][boxes % 4];
				see_counter++;
			}
			counter++;
		}
		if (clues[boxes % 4] != see_counter)
			return (1);
	}
	return (0);
}

int	bottom_clue_clash(int table[4][4], int boxes, int clues[16])
{
	int	counter;
	int	memory_max_height;
	int	see_counter;

	counter = 3;
	memory_max_height = 0;
	see_counter = 0;
	if (boxes / 4 == 3)
	{
		while (counter >= 0)
		{
			if (table[counter][boxes % 4] > memory_max_height)
			{
				memory_max_height = table[counter][boxes % 4];
				see_counter++;
			}
			counter--;
		}
		if (clues[4 + boxes % 4] != see_counter)
			return (1);
	}
	return (0);
}
