/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:00:33 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/08 17:18:25 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	pos;
	char	nullchar;

	pos = 0;
	nullchar = '\0';
	while (*(s + pos))
	{
		write(fd, &(*(s + pos)), 1);
		pos++;
	}
	write(fd, &nullchar, 1);
}
