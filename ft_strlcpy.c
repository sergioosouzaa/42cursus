#include<stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while(*(str + i) != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	pos;

	pos = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (pos < size - 1 && *(src + pos))
	{
		*(dst + pos) = *(src + pos);
		pos++;
	}
	*(dst + pos) = '\0';
	return (ft_strlen(src));
}

// #include<stdio.h>
// void test(int size)
// {
//     char string[] = "Hello there, Venus";
//     char buffer[19];
//     int r;
//     r = ft_strlcpy(buffer,string,size);
//     printf("Copied '%s' into '%s', length %d\n",
//             string,
//             buffer,
//             r
//           );
// }
// int main()
// {
//     test(50);
//     test(10);
//     test(1);
//     test(0);
//     return(0);
// }