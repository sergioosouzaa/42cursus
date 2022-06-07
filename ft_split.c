/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:01:27 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 09:01:29 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
static size_t check_malloc_size(char const *s, char c)
{
	size_t  size;
	size_t  pos;
	size_t  check_div;

	size = 0;
	pos = 0;
	check_div = 1;
	while(*(s + pos))
	{
		if(check_div == 1 && *(s + pos) != c)
		{
			check_div = 0;
			size++;
		}
		else if(*(s + pos) == c)
			check_div = 1;
		pos++;
	}
	printf("%ld SIZE \n", size);
	return (size);
}

static char* malloc_strings(char const *s, char c, size_t*  pos)
{
	size_t  size;
	size_t  check_div;
	char*   new_string;

	size = 0;
	check_div = 1;
	while(*(s + *pos))
	{
		if(check_div == 1 && *(s + *pos) != c)
		{
			check_div = 0;
			size++;
		}
		else if(*(s + *pos) == c && check_div == 0)
			break;
		(*pos)++;
	}
	if(check_div == 0)
	{
		new_string = malloc(size + 1);
		printf("%p POINTER \n", new_string);
		if(!new_string)
			return(0);
		return(new_string);
	}
	return(0);
}

static char** fill_array(char const *s, char c, char** splited_strings)
{
	size_t  pos;
	size_t  pos_array;
	size_t  pos_string;
	size_t  check_div;

	pos = 0;
	check_div = 1;
	pos_array = 0;
	pos_string = 0;
	while(*(s + pos))
	{
		if(check_div == 1 && *(s + pos) != c)
		{
			check_div = 0;
			splited_strings[pos_array][pos_string++] = *(s + pos);
		}
		else if(*(s + pos) == c && check_div == 0)
		{
			splited_strings[pos_array++][pos_string] = '\0';
			pos_string = 0;
			check_div = 1;
		}
		else if (*(s + pos) != c )
			splited_strings[pos_array][pos_string++] = *(s + pos);
		pos++;
	}
	return (splited_strings);
}

char **ft_split(char const *s, char c)
{
	size_t array_size;
	char** splited_strings;
	size_t  pos;
	size_t  array_pos;

	pos = 0;
	array_pos = 0;
	array_size = check_malloc_size(s, c) + 1;
	splited_strings = (char**)malloc(array_size);
	if(!splited_strings)
		return(0);
	while(*(s + pos))
	{
		splited_strings[array_pos] = malloc_strings(s, c, &pos);
		array_pos++;
	}
	splited_strings[array_pos] = 0;
	splited_strings = fill_array(s, c, splited_strings);
	return(splited_strings);
}


int main(void)
{
	char** text = ft_split("..AA..gsfer..sadsadasda..", '.');
	printf("%s \n", text[2]);
}