/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wricky-t <wricky-t@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:13:09 by wricky-t          #+#    #+#             */
/*   Updated: 2022/02/22 17:13:11 by wricky-t         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*out;
	int				append_at;

	i = 0;
	out = dest;
	append_at = ft_strlen(dest);
	while (*src != '\0' && (i < nb))
	{
		out[append_at] = *src;
		src++;
		append_at++;
		i++;
	}
	out[append_at] = '\0';
	return (out);
}
