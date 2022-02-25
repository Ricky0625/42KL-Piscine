/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:22:44 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/14 09:40:12 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char ch);

void	printlogic(int a, int b, int x, int y)
{
	int	i;
	int	j;

	i = a;
	j = b;
	if ((i == 1 & j == 1) | (i == 1 & j == x))
	{
		ft_putchar('o');
	}
	else if ((i == y & j == 1) | (i == y & j == x))
	{
		ft_putchar('o');
	}
	else if (j == x | j == 1)
	{
		ft_putchar('|');
	}
	else if (i == y | i == 1)
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int		i;
	int		j;

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
