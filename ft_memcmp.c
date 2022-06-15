/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:56:43 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/13 13:40:35 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	size_t			pos;
	unsigned char	*buffer1;
	unsigned char	*buffer2;

	buffer1 = (unsigned char *)buf1;
	buffer2 = (unsigned char *)buf2;
	pos = 0;
	if (count == 0)
		return (0);
	while (pos < count)
	{
		if (*(buffer1 + pos) != *(buffer2 + pos))
			break ;
		pos++;
	}
	if (pos == count)
		pos--;
	return (*(buffer1 + pos) - *(buffer2 + pos));
}
