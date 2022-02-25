/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:34:18 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/16 18:56:26 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	char	a;
	char	z;
	int		result;
	int		dif;

	a = 'A';
	z = 'Z';
	result = 1;
	dif = 'a' - 'A';
	while (*str != '\0')
	{
		if ((*str >= a & *str <= z) | (*str >= a + dif & *str <= z + dif))
			result = 1;
		else
		{
			result = 0;
			break ;
		}
		str++;
	}
	return (result);
}
