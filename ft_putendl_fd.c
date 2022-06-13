/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:58:31 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/08 17:01:40 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	pos;
	char	newline;
	char	nullchar;

	newline = '\n';
	nullchar = '\0';
	pos = 0;
	while (*(s + pos))
	{
		write(fd, &*(s + pos), 1);
		pos++;
	}
	write(fd, &nullchar, 1);
	write(fd, &newline, 1);
}
