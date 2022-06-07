/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:57:41 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 08:58:02 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memset(void *buf, int ch, size_t count)
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

// #include <stdio.h>
// #include <string.h>
// int main () {
// char str[50];
// strcpy(str,"This is string.h library function");
// puts(str);
// ft_memset(str,'$',7);
// puts(str);
// strcpy(str,"This is string.h library function");
// puts(str);
// ft_memset(str,500,7);
// puts(str);
// memset(str,500,7);
// puts(str);
// return(0);
// }