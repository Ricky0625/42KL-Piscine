/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:18:09 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/25 16:18:11 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_sqrt(int i, int nb)
{
	if ((i * i) == nb)
		return (i);
	else if ((i * i) < nb)
		return (check_sqrt((i + 1), nb));
	else
		return (0);
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	return (check_sqrt(i, nb));
}
