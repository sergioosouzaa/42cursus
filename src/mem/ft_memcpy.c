#include<stdlib.h>

void *ft_memcpy(void *to, const void *from, size_t count)
{
	char	*buf_to;
	char	*buf_from;
	size_t	pos;

	pos = 0;
	buf_to = (char*)to;
	buf_from = (char*)from;
	while (pos < count)
	{
		*(buf_to + pos) = *(buf_from + pos);
		pos++;
	}
	return (buf_to + pos);
}

// #include <stdio.h>
// #include <string.h>
// int main () 
// {
//    const char src[50] = "This is the test!";
//    char dest[50];
//    strcpy(dest,"Heloooo!!");
//    printf("Before memcpy dest = %s\n", dest);
//    ft_memcpy(dest, src, strlen(src)+1);
//    printf("After memcpy dest = %s\n", dest);
	// char csrc[100] = "Geeksfor";
	// ft_memcpy(csrc + 5, csrc, strlen(csrc) + 1);
	// printf("%s", csrc);
	// return 0;
// }