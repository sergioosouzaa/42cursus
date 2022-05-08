#include<stdlib.h>

static size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(*(str + i) != '\0')
        i++;
    return (i);
}

char *strrchr(const char *str, int ch)
{
    unsigned int pos;
    size_t char_pos;

    char_pos = ft_strlen(str);
    while ((*str + pos) != '\0')
    {
        if ((*str + pos) == ch)
            char_pos = str + pos;
        pos++;
    }
    return (char_pos);
}