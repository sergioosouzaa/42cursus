/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:05:57 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/13 18:12:53 by sdos-san         ###   ########.fr       */
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

static int	check_trim_char(char const *set, char s1)
{
	size_t	pos;

	pos = 0;
	while (*(set + pos) != '\0')
	{
		if (s1 == *(set + pos))
			return (0);
		pos++;
	}
	return (1);
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	string_size;
	size_t	pos;
	char	*ptr;
	size_t	pos_sub;

	pos = start;
	pos_sub = 0;
	string_size = len;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		string_size = 0;
	else if (len >= ft_strlen(s + start))
		string_size = ft_strlen(s + start);
	ptr = (char *)malloc(string_size + 1);
	if (!ptr)
		return (0);
	while (pos_sub < string_size)
	{
		*(ptr + pos_sub) = *(s + pos);
		pos++;
		pos_sub++;
	}
	*(ptr + pos_sub) = '\0';
	return (ptr);
}

static char	*return_free(void)
{
	char	*output_string;

	output_string = (char *)malloc(1);
	if (!output_string)
		return (0);
	*(output_string) = '\0';
	return (output_string);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	pos1;
	size_t	pos2;
	size_t	pos_out;
	char	*output_string;

	if (!s1)
		return (0);
	pos1 = 0;
	pos2 = ft_strlen(s1) - 1;
	pos_out = 0;
	while (check_trim_char(set, *(s1 + pos1)) == 0 && pos1 < ft_strlen(s1))
		pos1++;
	while (check_trim_char(set, *(s1 + pos2)) == 0 && pos2 > 0)
		pos2--;
	if (pos1 > pos2 || (pos1 == 0 && pos2 == 0))
		return (return_free());
	output_string = ft_substr(s1, pos1, pos2 - pos1 + 1);
	if (!output_string)
		return (0);
	return (output_string);
}
