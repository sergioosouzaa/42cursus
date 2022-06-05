static int	ft_isalpha(int ch)
{
	return ((ch > 64 && ch < 91) || (ch > 96 && ch < 123));
}

static int	ft_isdigit(int ch)
{
	return (ch >= 48 && ch <= 57);
}

int	ft_isalnum(int ch)
{
	return (ft_isdigit(ch) || ft_isalpha(ch));
}

// #include<stdio.h>
// int	main(void)
// {
// 	printf("%d - 0\n", ft_isalnum('0'));
// 	printf("%d - a\n", ft_isalnum('a'));
// 	printf("%d - A\n", ft_isalnum('A'));
// 	printf("%d - *\n", ft_isalnum('*'));
// 	printf("%d - ]\n", ft_isalnum(']'));
// 	printf("%d -  \\0\n", ft_isalnum('\0'));
// }