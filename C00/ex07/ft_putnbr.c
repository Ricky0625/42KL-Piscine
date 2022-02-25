/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:59:57 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/14 10:15:51 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		r;
	int		q;
	char	chr;
	char	chq;

	q = nb / 10;
	r = nb % 10;
	chq = q + 48;
	chr = r + 48;
	write(1, &chq, 1);
	write(1, &chr, 1);
}