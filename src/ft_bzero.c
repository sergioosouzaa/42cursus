
#include<stdlib.h>

void ft_bzero(void *s, size_t n)
{
    size_t pos;
    char *buffer;

    buffer = (char*)(s);
    pos = 0;
    while (pos < n)
    {
        *(buffer + pos) = '\0';
        pos++;
    }
}
