/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:03:39 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/12 18:25:23 by sdos-san         ###   ########.fr       */
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

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	pos;

	pos = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (pos < size - 1 && *(src + pos))
	{
		*(dst + pos) = *(src + pos);
		pos++;
	}
	*(dst + pos) = '\0';
	return (ft_strlen(src));
}
