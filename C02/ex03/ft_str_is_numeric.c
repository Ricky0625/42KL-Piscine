/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:51:45 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/16 18:51:49 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	char	zero;
	char	nine;
	int		result;

	zero = '0';
	nine = '9';
	result = 1;
	while (*str != '\0')
	{
		if (*str >= zero & *str <= nine)
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
