/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:59:35 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/14 14:16:32 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	printlogic(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		write(1, "\0", 1);
	}
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a <= '9')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					printlogic(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			d = c + 1;
			b++;
		}
		b = '0';
		a++;
	}
}
