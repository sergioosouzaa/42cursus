#include<stdlib.h>

char	*ft_strrchr(const char *str, int ch)
{
	size_t	pos;
	const char*	char_pos;

	char_pos = 0;
	pos = 0;
	while (*(str + pos) != '\0')
	{
		if (*(str + pos) == ch)
			char_pos = str + pos;
		pos++;
	}
	return ((char*)(char_pos));
}

// #include<stdio.h>
// int main(void)
// {
// 	const char str[] = "I. Am. Fearless!";
// 	const char ch = '.';
// 	char *ret;
// 	ret = ft_strrchr(str, ch);
// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	const char str1[] = "I. Am. Fearless!.";
// 	const char ch1 = '.';
// 	char *ret1;
// 	ret1 = ft_strrchr(str1, ch1);
// 	printf("String after |%c| is - |%s|\n", ch1, ret1);
// 	const char str2[] = "I. Am. Fearless!.";
// 	const char ch2 = '-';
// 	char *ret2;
// 	ret2 = ft_strrchr(str2, ch2);
// 	printf("String after |%c| is - |%s|\n", ch2, ret2);
// }