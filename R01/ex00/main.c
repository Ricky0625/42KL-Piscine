/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:36:12 by alyap             #+#    #+#             */
/*   Updated: 2022/02/21 10:07:04 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str);
int		ft_char_to_int(char c);
int		*ft_remove_non_digit(char *str);
void	ft_print_matrix(int matrix[4][4]);
int		input_validation(char *str);
int		ft_solver(int table[4][4], int clues[16], int boxes);

//Initialize global variable tanble array
int	g_table[4][4] =
{
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0}
};

int	main(int argc, char **argv)
{
	int	*clues;

	if (argc == 2)
	{
		clues = malloc(sizeof(int) * 16);
		if (input_validation(argv[1]) != 1)
		{
			ft_putstr("Invalid argument");
			return (0);
		}
		clues = ft_remove_non_digit(argv[1]);
		if (ft_solver(g_table, clues, 0) == 1)
			ft_print_matrix(g_table);
		else
			ft_putstr("There is no solution\n");
		return (0);
	}
	else
	{
		ft_putstr("Invalid argument");
		return (0);
	}
}
