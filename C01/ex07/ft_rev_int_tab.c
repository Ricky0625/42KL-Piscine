/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:04:42 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/16 15:04:49 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;
	int	size_div;

	count = 0;
	size_div = size / 2;
	while (count <= size_div)
	{
		temp = tab[count];
		tab[count] = tab[size - 1 - count];
		tab[size - 1 - count] = temp;
		count++;
	}
}
