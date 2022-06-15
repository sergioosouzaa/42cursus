/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:58:31 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/13 16:21:22 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putendl_fd(char *s, int fd)
{
	size_t	pos;
	char	newline;
	char	nullchar;

	newline = '\n';
	nullchar = '\0';
	pos = 0;
	if (!s)
		return ;
	while (*(s + pos))
	{
		ft_putchar_fd(*(s + pos), fd);
		pos++;
	}
	ft_putchar_fd(newline, fd);
}
