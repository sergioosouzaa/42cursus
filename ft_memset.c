/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:57:41 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 20:24:32 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memset(void *buf, int ch, size_t count)
{
	size_t			pos;
	unsigned char	*buffer;

	buffer = buf;
	pos = 0;
	if(!buffer)
	{
		while(pos < count)
		{
			*(buffer + pos) = ch;
			pos++;
		}
	}
	return(buf);
}
