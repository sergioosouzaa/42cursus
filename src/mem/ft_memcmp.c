#include<stdlib.h>

int ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
    size_t pos;
    char *buffer1;
    char *buffer2;

    buffer1 = (char*)buf1;
    buffer2 = (char*)buf2;
    pos = 0;
    while (pos < count)
    {
        if (*(buffer1 + pos) != *(buffer2 + pos))
            break;
        pos++;
    }
    return (*(buffer1 + pos) - *(buffer2 + pos));
}
