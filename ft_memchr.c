/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:56:20 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 08:56:36 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memchr(const void *buffer, int ch, size_t count)
{
	size_t	pos;
	char	*string_buffer;

	string_buffer = (char*)buffer;
	pos = 0;
	while(pos < count)
	{
		if(*(string_buffer + pos) == ch)
			return(string_buffer + pos);
		pos++;
	}
	return((void*)0);
}

// #include <stdio.h>
// #include <string.h>
// int main () {
//    const char str[] = "I am. Fearless";
//    const char ch = '.';
//    char *ret;
//    ret = ft_memchr(str, ch, strlen(str));
//    printf("String after |%c| is - |%s|\n", ch, ret);
//     const char str1[] = "I am. Fearless";
//    const char ch1 = '\0';
//    char *ret1;
//    ret1 = ft_memchr(str1, ch1, 155);
//    printf("String after |%c| is - |%s|\n", ch1, ret1);
// }