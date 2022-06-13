/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:02:06 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/12 17:57:01 by sdos-san         ###   ########.fr       */
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

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	pos;
	size_t			size;

	size = ft_strlen(s);
	pos = 0;
	if (!s || !f)
		return ;
	while (size > 0)
	{
		f(pos, (s + pos));
		pos++;
		size--;
	}
}
