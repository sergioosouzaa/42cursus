/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:04:16 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/12 17:51:18 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	pos;

	pos = 0;
	if (!f || !s)
		return (0);
	new_str = malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (0);
	*(new_str + ft_strlen(s)) = '\0';
	while (*(s + pos))
	{
		*(new_str + pos) = f(pos, *(s + pos));
		pos++;
	}
	return (new_str);
}
