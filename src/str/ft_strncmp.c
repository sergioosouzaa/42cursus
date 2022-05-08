#include<stdlib.h>

int ft_strncmp(const char *str1, const char *str2, size_t count)
{
    size_t pos;

    pos = 0;
    while (pos < count && *(str1 + pos) != '\0' && *(str2 + pos) != '\0')
    {
        if (*(str1 + pos) != *(str2 + pos))
            break;
        pos++;
    }
    return (*(str1 + pos) - *(str2 + pos));
}
