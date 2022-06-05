#include<stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while(*(str + i) != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	pos;
	size_t	size_dst;
	size_t	size_src;

	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	pos = 0;
	if (size > size_src)
	{
		while (pos < (size - size_dst - 1) && *(src + pos) != '\0')
		{
			*(dst + size_dst + pos) = *(src + pos);
			pos++;
		}
		*(dst + size_dst + pos) = '\0';
		return (size_dst + size_src);
	}
	return (size_dst + size);
}

// #include<stdio.h>
// #include <string.h>  // On BSD or compatible systems
// #include <bsd/string.h>
// size_t strlcat( char *dst, const char *src, size_t siz);
// int main(void)
// {
// 	char dst[100] = "1234";
// 	char src[100] = "ABCD";
// 	printf ("// Return %lu\n", ft_strlcat(dst, src, 3));
// 	printf ("// dst = %s\n", dst);
// 	printf ("// src = %s\n", src);
// 	char dst4[100] = "1234";
// 	char src4[100] = "ABCD";
// 	printf ("// Return %lu\n", strlcat(dst4, src4, 3));
// 	printf ("// dst = %s\n", dst4);
// 	printf ("// src = %s\n", src4);
// 	char dst1[100] = "1234";
// 	char src1[100] = "ABCD";
// 	printf ("// Return %lu\n", ft_strlcat(dst1, src1, 50));
// 	printf ("// dst = %s\n", dst1);
// 	printf ("// src = %s\n", src1);
// 	char dst2[100] = "1234";
// 	char src2[100] = "ABCD";
// 	printf ("// Return %lu\n", strlcat(dst2, src2, 50));
// 	printf ("// dst = %s\n", dst2);
// 	printf ("// src = %s\n", src2);
// 	return 0;
// }