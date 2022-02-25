/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:54:09 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/16 15:54:12 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	key;
	int	compared;

	start = 1;
	while (start < size)
	{
		key = tab[start];
		compared = start - 1;
		while (compared >= 0 && tab[compared] > key)
		{
			tab[compared + 1] = tab[compared];
			compared--;
		}
		tab[compared + 1] = key;
		start++;
	}
}
