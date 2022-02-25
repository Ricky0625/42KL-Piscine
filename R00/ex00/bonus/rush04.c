/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 10:42:27 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/14 09:41:39 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);

void	printlogic(int a, int b, int col, int row)
{
	int	i;
	int	j;

	i = a;
	j = b;
	if ((i == 1 && j == 1) | (i == row && j == col && i != 1 && j != 1))
	{
		ft_putchar('A');
	}
	else if ((i == 1 && j == col) | (i == row && j == 1))
	{
		ft_putchar('C');
	}
	else if (i == 1 | i == row | j == 1 | j == col)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}	
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (x < 0 | y < 0)
	{
		write(1, "Input positive integer.", sizeof("Input positive integer."));
	}
	else
	{
		while (i <= y)
		{
			while (j <= x)
			{
				printlogic(i, j, x, y);
				j++;
			}
			i++;
			j = 1;
			ft_putchar('\n');
		}
	}
}
