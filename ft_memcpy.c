/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:57:05 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/08 17:14:12 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memcpy(void *to, const void *from, size_t count)
{
	char	*buf_to;
	char	*buf_from;
	size_t	pos;

	pos = 0;
	buf_to = (char *)to;
	buf_from = (char *)from;
	while (pos < count)
	{
		*(buf_to + pos) = *(buf_from + pos);
		pos++;
	}
	return (buf_to);
}
