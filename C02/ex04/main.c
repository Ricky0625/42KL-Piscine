/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichew <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:49:48 by pichew            #+#    #+#             */
/*   Updated: 2022/02/14 20:27:04 by pichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%i\n", ft_str_is_lowercase("hahhhaa")); //1
	printf("%i\n", ft_str_is_lowercase("zzz9*zzz")); //0
	printf("%i\n", ft_str_is_lowercase("564")); //0
	printf("%i\n", ft_str_is_lowercase("ads ads")); //0
	printf("%i\n", ft_str_is_lowercase("ZZZ")); //0
	return (0);
}
