/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:03:08 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/14 21:48:37 by sdos-san         ###   ########.fr       */
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


static size_t	ft_strlcpy(char *dst, const char *src, size_t size)
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	pos;
	size_t	size_output;

	pos = 0;
	while (*dst && pos < size)
	{
		++dst;
		++pos;
	}
	size_output = ft_strlcpy(dst, src, size - pos);
	return (size_output + pos);
}