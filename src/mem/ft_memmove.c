#include<stdlib.h>

void	*ft_memmove(void *to, const void *from, size_t count)
{
	char 		*char_to;
	const char	*char_from;
	char		*temp;
	size_t		pos;

	pos = 0;
	temp = (char*)malloc(count);
	char_to = (char*)to;
	char_from = (const char*)from;
	if (temp)
	{
		while (pos < count)
		{
			*(temp + pos) = *(char_from + pos);
			pos++;
		}
		pos = 0;
		while (pos < count)
		{
			*(char_to + pos) = *(temp + pos);
			pos++;
		}
		free(temp);
	}
	return (char_to);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100] = "Learningisfun";
//     char *first, *second;
//     first = str;
//     second = str;
//     printf("Original string :%s\n ", str);
      
//     // when overlap happens then it just ignore it
//     memcpy(first + 8, first, 10);
//     printf("memcpy overlap : %s\n ", str);
  
//     // when overlap it start from first position
//     ft_memmove(second + 8, first, 10);
//     printf("memmove overlap : %s\n ", str);
// }