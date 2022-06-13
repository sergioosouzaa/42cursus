/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:05:26 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/09 12:03:31 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strrchr(const char *str, int ch)
{
	size_t		pos;
	const char	*char_pos;

	ch = ch % 256;
	char_pos = 0;
	pos = 0;
	while (*(str + pos) != '\0')
	{
		if (*(str + pos) == ch)
			char_pos = str + pos;
		pos++;
	}
	if (ch == 0)
	{
		char_pos = str + pos;
		return ((char *)(char_pos));
	}
	return ((char *)(char_pos));
}
