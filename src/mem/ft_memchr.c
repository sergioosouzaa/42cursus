#include<stdlib.h>

void *ft_memchr(const void *buffer, int ch, size_t count)
{
    size_t pos;
    char *string_buffer;

    string_buffer = (char*)buffer;
    pos = 0;
    while (*(string_buffer + pos) != '\0' && pos < count)
    {
        if(*(string_buffer + pos) == ch)
            return (string_buffer + pos);
    }
    return ((void*)0);
}
