/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:24:16 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/24 18:24:18 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;

	diff = 0;
	while (*s1 == *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	diff = *s1 - *s2;
	if (diff < 0)
		return (-1);
	else
		return (1);
	return (diff);
}

void	bubble_sort(int size, char **str)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - 1)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
				temp = str[j + 1];
				str[j + 1] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	comp_result;

	i = 1;
	j = 1;
	comp_result = 0;
	if (argc == 1)
		return (0);
	bubble_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
