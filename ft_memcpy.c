/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:57:05 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/13 16:25:04 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memcpy(void *to, const void *from, size_t count)
{
	unsigned char	*buf_to;
	unsigned char	*buf_from;
	size_t			pos;

	pos = 0;
	buf_to = (unsigned char *)to;
	buf_from = (unsigned char *)from;
	if (!buf_to && !buf_from && count > 0)
		return (0);
	while (pos < count)
	{
		*(buf_to + pos) = *(buf_from + pos);
		pos++;
	}
	return (buf_to);
}
