/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:32:43 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/14 09:40:56 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);

void	poggers(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) | (i == 1 && j == x && j != 1))
	{
		ft_putchar('A');
	}
	else if ((i == y && j == 1) | (i == y && j == x && i != 1))
	{
		ft_putchar('C');
	}
	else if (i == 1 | i == y | j == 1 | j == x)
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
				poggers(i, j, x, y);
				j++;
			}
			j = 1;
			i++;
			ft_putchar('\n');
		}
	}
}
