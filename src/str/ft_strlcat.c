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
// int main(void)
// {
// 	char dst[100] = "1234";
// 	char src[100] = "ABCD";
// 	printf ("// Return %lu\n", ft_strlcat(dst, src, 2));
// 	printf ("// dst = %s\n", dst);
// 	printf ("// src = %s\n", src);
// 	char dst1[100] = "1234";
// 	char src1[100] = "ABCD";
// 	printf ("// Return %lu\n", ft_strlcat(dst1, src1, 7));
// 	printf ("// dst = %s\n", dst1);
// 	printf ("// src = %s\n", src1);
// 	return 0;
// }