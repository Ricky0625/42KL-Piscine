/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:03:19 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/24 18:03:21 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 1)
		return (0);
	ft_putstr(argv[0]);
	return (0);
}
