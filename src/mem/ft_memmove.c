#include<stdlib.h>

void *ft_memmove(void *to, const void *from, size_t count)
{
    unsigned char *char_to;
    unsigned char *char_from;
    char *temp;
    size_t pos;

    pos = 0;
    temp = (char*)malloc(count);
    char_to = (char*)to;
    char_from = (const char*)from;
    if (temp)
    {
        while (pos < count)
        {
            *(temp + pos) = *(char_from + pos);
            pos++;
        }
        pos = 0;
        while (pos < count)
        {
            *(char_to + pos) = *(temp + pos);
            pos++;
        }
        free(temp);
    }
}
