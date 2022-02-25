/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:21:28 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/22 16:21:34 by wricky-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*out;
	int		append_at;

	out = dest;
	append_at = ft_strlen(dest);
	while (*src != '\0')
	{
		out[append_at] = *src;
		src++;
		append_at++;
	}
	out[append_at] = '\0';
	return (out);
}
