/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichew <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:55:05 by pichew            #+#    #+#             */
/*   Updated: 2022/02/14 20:13:48 by pichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char a[15];
	char b[15];
	char c[] = "You are damn wonderful";
	char d[] = "You is very wonderful";
	char e[15] = "GG";
	char f[15] = "GG";
	char g[] = "I happy!";
	char *h;

	h = g;
	printf("%s\n", ft_strncpy(a, g, 3)); // I h
	printf("%s\n", ft_strncpy(b, g, 15)); //I happy!/0/0/0/0
	printf("%s\n", ft_strncpy(c, g, 3)); // I h are damn wonderful
	printf("%s\n", ft_strncpy(d, g, 15));//I happy!/0/0/0/0
	printf("%s\n", ft_strncpy(e, g, 3)); // I h
	printf("%s\n", ft_strncpy(f, g, 15));//I happy!/0/0/0/0

	return (0);
}
