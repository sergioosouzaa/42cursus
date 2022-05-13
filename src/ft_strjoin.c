#include<stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while(*(str + i) != '\0')
		i++;
	return (i);
}

void copy_str(char const *s, char* new_str)
{
	size_t pos;

	pos = 0;
	while (*(s + pos))
	{
		*(new_str + pos) = *(s + pos);
		pos++;
	}
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char* 	new_string;
	size_t	string_size;

	string_size = 1 + ft_strlen(s1) + ft_strlen(s2);
	new_string = (char*)malloc(string_size);
	if (!new_string)
		return (0);
	copy_str(s1, new_string);
	copy_str(s2, new_string + ft_strlen(s1));
	*(new_string + ft_strlen(s1) + ft_strlen(s2)) = '\0';
	return (new_string);
}

// #include<stdio.h>
// int main(void)
// {
// 	char* nums = "abcde";
// 	char* nums1 = "fghi";
// 	printf("%s \n", ft_strjoin(nums, nums1));
// }