#include<stdlib.h>

static size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(*(str + i) != '\0')
        i++;
    return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t pos;

    pos = 0;
    while (pos < size - 1)
    {
        *(dst + pos) = *(src + pos);
        pos++;
    }
    if (pos != 0)
        *(dst + pos) = '\0';
    return (strlen(src));
}