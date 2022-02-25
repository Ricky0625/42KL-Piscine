/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:06:47 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/23 14:06:49 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	out;
	int	neg_count;

	out = 0;
	neg_count = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			neg_count++;
			str++;
		}
		else
			str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		out = (out * 10) + (*str - '0');
		str++;
	}
	if (neg_count % 2 != 0)
		return (-out);
	return (out);
}
