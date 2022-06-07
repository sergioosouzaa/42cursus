/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:54:04 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 08:54:06 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static void	*ft_memset(void *buf, int ch, size_t count)
{
	size_t			pos;
	unsigned char	*buffer;

	buffer = buf;
	pos = 0;
	while(pos < count)
	{
		*(buffer + pos) = ch;
		pos++;
	}
	return(buf);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	counter;

	counter = 0;
	if(size == 0)
		return (0);
	ptr = malloc(nmemb*size);
	if(!ptr)
		return(0);
	ft_memset(ptr, '\0', nmemb*size);
	return(ptr);
}