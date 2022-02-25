/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:03:36 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/16 19:03:38 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	char	a;
	char	z;
	int		result;

	a = 'a';
	z = 'z';
	result = 1;
	while (*str != '\0')
	{
		if (*str >= a && *str <= z)
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
