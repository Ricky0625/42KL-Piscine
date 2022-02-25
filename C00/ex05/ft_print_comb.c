/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:42:33 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/14 14:16:10 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_string(char x, char y, char z)
{
	write(1, &x, sizeof (x));
	write(1, &y, sizeof (y));
	write(1, &z, sizeof (z));
	if (x == '7' && y == '8' && z == '9')
	{
		write(1, "\0", 1);
	}
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char		x;
	char		y;
	char		z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_print_string(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
