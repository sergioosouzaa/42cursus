#include<stdlib.h>

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	size_t	pos;
	char	*buffer1;
	char	*buffer2;

	buffer1 = (char*)buf1;
	buffer2 = (char*)buf2;
	pos = 0;
	while (pos < count)
	{
		if (*(buffer1 + pos) != *(buffer2 + pos))
			break;
		pos++;
	}
	return (*(buffer1 + pos) - *(buffer2 + pos));
}

#include <stdio.h>
int main (void) 
{
	char str1[15] = "abcdef";
	char str2[15] = "ABCDEF";
	char str3[15] = "ABCDEF";
	char str4[15] = "ABCDEF";

	printf("%d \n", ft_memcmp(str1, str2, 5));
	printf("%d \n", ft_memcmp(str3, str4, 5));
}
