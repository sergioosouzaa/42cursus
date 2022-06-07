/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:52:48 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 08:53:14 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	pos;
	char	*buffer;

	buffer = (char*)(s);
	pos = 0;
	while(pos < n)
	{
		*(buffer + pos) = '\0';
		pos++;
	}
}

// #include <stdio.h>
// #include <string.h>
// int main () {
//    char str[50];
//    strcpy(str,"This is string.h library function");
//    puts(str);
//    ft_bzero(str,7);
//    puts(str);  
//    return(0);
// }