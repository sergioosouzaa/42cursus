/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:04:41 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 20:30:19 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	size_t	pos;

	pos = 0;
	while(pos < count && *(str1 + pos) && *(str2 + pos))
	{
		if(*(str1 + pos) != *(str2 + pos))
			break;
		pos++;
	}
	return(*(str1 + pos) - *(str2 + pos));
}
