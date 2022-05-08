#include<stdlib.h>

int ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
    unsigned char *buffer1;
    unsigned char *buffer2;
    size_t pos;

    pos = 0;
    buffer1 = (char*)buf1;
    buffer2 = (char*)buf2;
    while (pos < count)
    {
        if (*(buffer1 + pos) != *(buffer2 + pos))
            return (*(buffer1 + pos) - *(buffer2 + pos));
        pos++;
    }
    return (*(buffer1 + pos) - *(buffer2 + pos));
}
