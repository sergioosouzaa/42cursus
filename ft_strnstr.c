#include<stdlib.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	pos_s1;
	size_t	pos_s2;
	size_t	point_s1;

	pos_s1 = 0;
	pos_s2 = 0;
	point_s1 = 0;
	if (!s2)
		return (s1);
	while (pos_s1 < n && *(s1 + pos_s1) && *(s2 + pos_s2))
	{
		if (*(s1 + pos_s1) == *(s2 + pos_s2))
			pos_s2++;
		else
		{
			pos_s2 = 0;
			point_s1 = pos_s1;
		} 
		pos_s1++;
	}
	if (!*(s2 + pos_s2))
		return ((char*)(s1 + point_s1));
	return (0);
}

// #include<stdio.h>
// int main(void)
// {
//     const char *largestring = "Foo Ba";
//     const char *smallstring = "Bar";
//     char	*ptr;
//     ptr = ft_strnstr(largestring, smallstring, 10);
//     printf("%s \n", ptr);
//     const char *largestring = "Foo Ba";
//     const char *smallstring = "Bar";
//     char	*ptr;
//     ptr = ft_strnstr(largestring, smallstring, 0);
//     printf("%s \n", ptr);
//     const char *largestring = "Foo Bar Baz";
//     const char *smallstring = "Bar";
//     char *ptr;
//     ptr = strnstr(largestring, smallstring, 4);
//     printf("%s \n", ptr);
//     const char *largestring = "Foo Bar Baz";
//     const char *smallstring = "Bar";
//     char *ptr;
//     ptr = strnstr(largestring, smallstring, 10);
//     printf("%s \n", ptr);
//     const char *largestring = "Foo Ba";
//     const char *smallstring = "";
//     char	*ptr;
//     ptr = ft_strnstr(largestring, smallstring, 10);
//     printf("%s \n", ptr);
// }
