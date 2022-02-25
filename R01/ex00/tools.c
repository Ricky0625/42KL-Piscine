/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:36:12 by alyap             #+#    #+#             */
/*   Updated: 2022/02/21 10:08:24 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_char_to_int(char c);

// Function that prints a single character
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Function that prints a string
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

// Function that count length of string
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	no_solution(void)
{
	char	*err;

	err = "ERROR!";
	ft_putstr(err);
	ft_putchar('\n');
}

// Only count length of digits
int	strlen_ig_space(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		if (*str >= '1' && *str <= '9')
		{
			len++;
			str++;
		}
		else
			str++;
	}
	return (len);
}
