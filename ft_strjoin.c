/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:02:36 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/13 16:28:35 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

static void	copy_str(char *new_str, char const *s)
{
	size_t	pos;

	pos = 0;
	while (*(s + pos))
	{
		*(new_str + pos) = *(s + pos);
		pos++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	string_size;

	if (!s1 || !s2)
		return (0);
	string_size = 1 + ft_strlen(s1) + ft_strlen(s2);
	new_string = (char *)malloc(string_size);
	if (!new_string)
		return (0);
	copy_str(new_string, s1);
	copy_str(new_string + ft_strlen(s1), s2);
	*(new_string + ft_strlen(s1) + ft_strlen(s2)) = '\0';
	return (new_string);
}
