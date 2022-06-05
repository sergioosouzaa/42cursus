#include<stdlib.h>
#include<stdio.h>
static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while(*(str + i) != '\0')
		i++;
	return (i);
}

static int  check_trim_char(char const *set, char s1)
{
    size_t pos;

    pos = 0;
    while (*(set + pos) != '\0')
    {
        if(s1 == *(set + pos))
            return (0);
        pos++;
    }
    return (1);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t pos1;
    size_t pos2;
    size_t pos_out;
    char* output_string;

    pos1 = 0;
    pos2 = ft_strlen(s1) - 1;
    pos_out = 0;
    while(check_trim_char(set, *(s1 +pos1)) == 0)
        pos1++;
    while(check_trim_char(set, *(s1 + pos2)) == 0)
        pos2--;  
    output_string = (char*)malloc(pos2 - pos1 + 1);
    if(!output_string)
        return (0);
    while(pos_out < pos2 - pos1 + 1)      
    {
        *(output_string + pos_out) = *(s1 + pos_out + pos1);
        pos_out++;
    }
    return(output_string);
}


// int main(void)
// {
//     char const* test = "12a3123";
//     char const* set = "123";
//     printf("%s \n", ft_strtrim(test, set));
// }