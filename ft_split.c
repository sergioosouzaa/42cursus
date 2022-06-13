/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:01:27 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/12 21:30:41 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

static char	**malloc_array(char const *s, char c)
{
	size_t	size;
	size_t	pos;
	size_t	check_div;
	char	**ptr;

	size = 0;
	pos = 0;
	check_div = 1;
	while (*(s + pos))
	{
		if (check_div == 1 && *(s + pos) != c)
		{
			check_div = 0;
			size++;
		}
		else if (*(s + pos) == c)
			check_div = 1;
		pos++;
	}
	ptr = malloc(size + 1);
	if (!ptr)
		return (0);
	ptr[size] = 0;
	return (ptr);
}

char	*malloc_str(char **ptr, char* s, char c)
{
	size_t	size;
	size_t	pos;

	size = 0;
	pos = 0;
	while (*(s + pos))
	{
		if (*(s + pos) != c)
			size++;
		else if (si)
	}

}


char	**ft_split(char const *s, char c)
{
	char	**str_array;
	size_t	pos;
	size_t	pos_array;

	pos_array = 0;
	pos = 0;
	str_array = malloc_array(s, c);
	if (!str_array)
		return (0);
	while (*(s + pos))
	{
		malloc_str(str_array + pos_array, s + pos, c);
		pos_array++;
		pos++;
	}
	*(str_array + pos_array) = '\0';
}

// int main(void)
// {
// 	char** text = ft_split("....a...sadsaa...a", '.');
// 	printf("%s \n", text[0]);
// }