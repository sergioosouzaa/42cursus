/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:01:35 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 20:24:45 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	unsigned int	pos;

	pos = 0;
	while(*(str + pos) != '\0')
	{
		if(*(str + pos) == c)
			return((char*)(str + pos));
		pos++;
	}
	return((void*)0);
}
