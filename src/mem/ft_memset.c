
#include<stdlib.h>

void *ft_memset(void *buf, int ch, size_t count)
{
    size_t pos;
    unsigned char *buffer;

    buffer = buf;
    pos = 0;
    while (pos < count)
    {
        *(buffer + pos) = ch;
        pos++;
    }
    return (buf);
}
