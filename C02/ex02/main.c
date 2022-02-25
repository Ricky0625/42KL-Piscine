/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichew <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:23:56 by pichew            #+#    #+#             */
/*   Updated: 2022/02/14 20:20:13 by pichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%i\n", ft_str_is_alpha("AWESOME")); //1
	printf("%i\n", ft_str_is_alpha("haha1haha")); //0
	printf("%i\n", ft_str_is_alpha("awesome")); //1
	printf("%i\n", ft_str_is_alpha("AwEsOmE")); //1
	printf("%i\n", ft_str_is_alpha("")); //1
	printf("%i\n", ft_str_is_alpha(" ")); //0
	printf("%i", ft_str_is_alpha("I am idiot")); //0
}
