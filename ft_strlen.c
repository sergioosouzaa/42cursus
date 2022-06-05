#include<stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while(*(str + i) != '\0')
		i++;
	return (i);
}

// #include<stdio.h>
// int main()
// {
//     char a[20]="Program";
//     char b[20]={'P','r','o','g','r','a','m','\0'};
// 	char c[20]="";
//     printf("Length of string a = %zu \n",ft_strlen(a));
//     printf("Length of string b = %zu \n",ft_strlen(b));
// 	printf("Length of string b = %zu \n",ft_strlen(c));
// }