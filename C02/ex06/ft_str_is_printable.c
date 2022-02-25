/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:36:38 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/17 11:36:46 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 127)
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
