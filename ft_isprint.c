int	ft_isprint(int ch)
{
	return (ch >= 32 && ch <= 126);
}

// #include<stdio.h>
// int	main(void)
// {
// 	printf("%d - 0\n", ft_isprint('0'));
// 	printf("%d - \\0\n", ft_isprint('\0'));
// 	printf("%d - A\n", ft_isprint('A'));
// 	printf("%d - \\v\n", ft_isprint('\v'));
// }