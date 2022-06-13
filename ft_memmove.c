/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:57:21 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/09 11:42:34 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memmove(void *to, const void *from, size_t count)
{
	char		*char_to;
	const char	*char_from;
	size_t		pos;

	char_to = (char *)to;
	char_from = (const char *)from;
	if (count == 0)
		return (char_to);
	if (to + count < from)
	{
		pos = 0;
		while (pos < count)
		{
			*(char_to + pos) = *(char_from + pos);
			pos++;
		}
		return (char_to);
	}
	pos = count - 1;
	while (pos != 0)
	{
		*(char_to + pos) = *(char_from + pos);
		pos--;
	}
	*(char_to + pos) = *(char_from + pos);
	return (char_to);
}
