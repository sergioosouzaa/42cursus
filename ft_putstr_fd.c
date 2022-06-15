/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:00:33 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/13 17:01:08 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	size_t	pos;
	char	nullchar;

	pos = 0;
	nullchar = '\0';
	if (!s)
		return ;
	while (*(s + pos))
	{
		ft_putchar_fd(*(s + pos), fd);
		pos++;
	}
}
