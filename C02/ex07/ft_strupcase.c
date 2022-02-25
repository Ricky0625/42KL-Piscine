/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:17:40 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/17 12:17:42 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;
	int	diff;

	i = 0;
	diff = 'a' - 'A';
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' & str[i] <= 'z')
			str[i] = str[i] - diff;
		i++;
	}
	return (str);
}
