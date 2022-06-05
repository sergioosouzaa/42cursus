char	*ft_strchr(const char *str, int c)
{
	unsigned int	pos;

	pos = 0;
	while (*(str + pos) != '\0')
	{
		if(*(str + pos) == c)
			return ((char*)(str + pos));
		pos++;
	}
	return ((void*)0);
}

// #include<stdio.h>
// int	main () {
// 	const char str1[] = "I am. Fearless!";
// 	const char ch1 = '.';
// 	char *ret;
// 	ret = ft_strchr(str1, ch1);
// 	printf("String after |%c| is - |%s|\n", ch1, ret);
// 	const char str2[] = "I am. Fearless!";
// 	const char ch2 = '!';
// 	char *ret2;
// 	ret2 = ft_strchr(str2, ch2);
// 	printf("String after |%c| is - |%s|\n", ch2, ret2);   
// 	const char str3[] = "I am. Fearless!";
// 	const char ch3 = '-';
// 	char *ret3;
// 	ret3 = ft_strchr(str3, ch3);
// 	printf("String after |%c| is - |%s|\n", ch3, ret3);   
// }