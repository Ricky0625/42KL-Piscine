/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:36:12 by alyap             #+#    #+#             */
/*   Updated: 2022/02/21 10:08:11 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_char_to_int(char c);
void	ft_putchar(char c);
int		strlen_ig_space(char *str);

// Function to remove non digits in a string
int	*ft_remove_non_digit(char *str)
{
	int	output_i;
	int	*output;

	output_i = 0;
	output = malloc(sizeof(int) * 16);
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			output[output_i] = ft_char_to_int(*str);
			output_i++;
			str++;
		}
		else
		{
			str++;
		}
	}
	output[output_i] = '\0';
	return (output);
}

// Function that turns a string to array of integers
int	ft_char_to_int(char c)
{
	while (c != '\0' && (c >= '0' && c <= '9'))
		return (c - '0');
	return ('\0');
}

// Function that prints a valid integer
void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		nbr = nbr % 10;
	}
	if (nbr < 10)
	{
		ft_putchar(nbr + '0');
	}
}

void	ft_print_matrix(int matrix[4][4])
{
	int	row;
	int	column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			ft_putnbr(matrix[row][column]);
			ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}

int	input_validation(char *str)
{
	int	i;
	int	*sanitized;
	int	element_count;
	int	result;

	i = 0;
	sanitized = ft_remove_non_digit(str);
	element_count = strlen_ig_space(str);
	result = 0;
	if (!(element_count % 4))
	{
		while (i < element_count)
		{
			if (sanitized[i] > 0 && sanitized[i] <= (element_count / 4))
				i++;
			else
				return (0);
		}
		return (1);
	}
	return (0);
}
