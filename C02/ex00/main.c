/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichew <pichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:25:57 by pichew            #+#    #+#             */
/*   Updated: 2022/02/14 19:15:01 by pichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	a[11];
	char	b[] = "You are super wonderful";
	char	c[11] = "GG";
	char	d[] = "I am happy";
	char	*e;

	e = d;
	//printf("%s\n", ft_strcpy(a, e));
	//printf("%s\n", ft_strcpy(b, e));
	//printf("%s\n", ft_strcpy(c, e));
	printf("%s\n", strcpy(a, e));
	printf("%s\n", strcpy(b, e));
	printf("%s\n", strcpy(c, e));

	return (0);
}
