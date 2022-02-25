/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 09:57:48 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/14 10:08:31 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	ch;

	i = 'z';
	while (i >= 'a')
	{
		ch = i;
		write(1, &ch, 1);
		i--;
	}
}
