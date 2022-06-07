/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:57:21 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 08:57:36 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memmove(void *to, const void *from, size_t count)
{
	char 		*char_to;
	const char	*char_from;
	size_t		pos;
	int			counter;

	char_to = (char*)to;
	char_from = (const char*)from;
	if(to + count > from)
	{
		pos = 0;
		counter = 1;
	}
	else
	{
		pos = count;
		counter = -1;
	}
	while(pos > 0)
	{
		*(char_to + pos) = *(char_from + pos);
		pos = pos + counter;
	}
	return(char_to);
}

