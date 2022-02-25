/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:19:02 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/17 13:19:04 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		lcount;
	int		diff;

	i = 0;
	lcount = 0;
	diff = 'a' - 'A';
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' & str[i] <= 'Z') | (str[i] >= 'a' & str[i] <= 'z'))
		{
			lcount++;
			if (lcount == 1)
				str[i] = str[i] - diff;
			else if ((lcount != 1) & (str[i] >= 'A' & str[i] <= 'Z'))
				str[i] = str[i] + diff;
		}
		else if (str[i] >= '0' & str[i] <= '9')
			lcount++;
		else
			lcount = 0;
		i++;
	}
	return (str);
}
