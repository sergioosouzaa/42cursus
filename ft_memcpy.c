/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:57:05 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 08:57:17 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memcpy(void *to, const void *from, size_t count)
{
	char	*buf_to;
	char	*buf_from;
	size_t	pos;

	pos = 0;
	buf_to = (char*)to;
	buf_from = (char*)from;
	while(pos < count)
	{
		*(buf_to + pos) = *(buf_from + pos);
		pos++;
	}
	return(buf_to);
}

// #include <stdio.h>
// #include <string.h>
// int main (void) 
// {
// 	const char src[50] = "This is the test!";
// 	char dest[23] = "0000000000000000000000";
// 	char* value = ft_memcpy(dest, src, strlen(src));
// 	printf("Nova string: %s \n Ponteiro %p \n", dest, &value[0]);
// 	char* value1 = memcpy(dest, src, strlen(src));
// 	printf("Nova string: %s \n Ponteiro %p \n", dest, &value1[0]);
// 	return 0;
// }