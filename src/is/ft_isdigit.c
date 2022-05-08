int	ft_isdigit(int ch)
{
	return (ch >= 48 && ch <= 57);
}

// #include<stdio.h>
// int	main(void)
// {
// 	printf("%d - 0\n", ft_isdigit('0'));
// 	printf("%d - a\n", ft_isdigit('a'));
// 	printf("%d - A\n", ft_isdigit('A'));
// 	printf("%d - *\n", ft_isdigit('*'));
// 	printf("%d - aiscii150\n", ft_isdigit(150));
// 	printf("%d -  9\n", ft_isdigit('9'));
// }