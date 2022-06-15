/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:01:35 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/13 13:51:04 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	unsigned int	pos;

	pos = 0;
	c = c % 256;
	while (*(str + pos) != '\0')
	{
		if (*(str + pos) == c)
			return ((char *)(str + pos));
		pos++;
	}
	if (c == 0)
		return ((char *)(str + pos));
	return ((void *)0);
}
