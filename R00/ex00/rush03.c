/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 10:42:27 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/14 09:41:18 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);

void	printlogic(int a, int b, int c, int d)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = a;
	j = b;
	y = c;
	x = d;
	if ((i == 1 && j == 1) | (i == x && j == 1))
	{
		ft_putchar('A');
	}
	else if ((i == 1 && j == y) | (i == x && j == y))
	{
		ft_putchar('C');
	}
	else if (i == 1 | i == x | j == y | j == 1)
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
