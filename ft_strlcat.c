/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:03:08 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/12 20:00:46 by sdos-san         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	pos;
	size_t	size_dst;
	size_t	size_src;

	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	pos = 0;
	if (size > size_dst)
	{
		while (pos < (size - size_dst - 1) && *(src + pos) != '\0')
		{
			*(dst + size_dst + pos) = *(src + pos);
			pos++;
		}
		*(dst + size_dst + pos) = '\0';
		return (size_dst + size_src);
	}
	return (size + size_src);
}
