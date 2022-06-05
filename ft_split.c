#include<stdlib.h>

static size_t check_malloc_size(char const *s, char c)
{
    size_t  size;
    size_t  pos;
    size_t  check_div;

    size = 0;
    pos = 0;
    check_div = 1;
    while(*(s + pos))
    {
        if(check_div == 1 && *(s + pos) != c)
        {
            check_div = 0;
            size++;
        }
        else if(*(s + pos) == c)
            check_div = 1;
        pos++;
    }
    return (size);
}

static char** malloc_strings(char const *s, char c, char** splited_strings)
{
    size_t  size;
    size_t  pos;
    size_t  check_div;
    size_t  pos_array;

    size = 0;
    pos = 0;
    check_div = 1;
    pos_array = 0;
    while(*(s + pos))
    {
        if(check_div == 1 && *(s + pos) != c)
        {
            check_div = 0;
            size++;
        }
        else if(*(s + pos) == c)
        {
            splited_strings[pos_array] = malloc(size + 1);
            if(!splited_strings[pos_array])
                return (0);
            pos_array++;
            check_div = 1;
            size = 0;
        }
        pos++;
    }
    
    return (splited_strings);

}
static char* fill_array(char const *s, char c, char** splited_strings)
{
    size_t  pos;
    size_t  pos_array;
    size_t  pos_string;
    size_t  check_div;

    pos = 0;
    check_div = 1;
    pos_array = 0;
    while(*(s + pos))
    {
        if(check_div == 1 && *(s + pos) != c)
        {
            check_div = 0;
            splited_strings[pos_array][pos_string] = *(s + pos);
            pos_string++;
        }
        else if(*(s + pos) == c)
        {
            pos_array++;
            pos_string = 0;
            check_div = 1;
        }
        pos++;
    }

    return (splited_strings);
}

char **ft_split(char const *s, char c)
{
    size_t array_size;
    char** splited_strings;
    size_t  pos;

    pos = 0;
    array_size = check_malloc_size(s, c) + 1;
    splited_strings = (char**)malloc(array_size);
    if(!splited_strings)
        return(0);
    splited_strings = fill_array(s, c, splited_strings);
    return(splited_strings);
}

#include<stdio.h>
int main(void)
{

}