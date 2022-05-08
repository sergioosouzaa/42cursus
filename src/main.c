#include<stdio.h>


int ft_isalpha(int c)
{
    if((c > 64 && c < 91) || (c > 96 && c < 123))
        return (1);
    return (0);
}

int main(void)
{
    //is_alpha
    // unsigned char a = 'a';
    // unsigned char b = 'z';
    // unsigned char c = 'A';
    // unsigned char d = 'Z';
    // unsigned char e = 'F';
    // unsigned char f = '1';
    // unsigned char g = '0';
    // unsigned char h = -1;
    // unsigned char j = 145;
    // printf("%d  -  %c \n", ft_isalpha(a), a);
    // printf("%d  -  %c \n", ft_isalpha(b), b);
    // printf("%d  -  %c \n", ft_isalpha(c), c);
    // printf("%d  -  %c \n", ft_isalpha(d), d);
    // printf("%d  -  %c \n", ft_isalpha(e), e);
    // printf("%d  -  %c \n", ft_isalpha(f), f);
    // printf("%d  -  %c \n", ft_isalpha(g), g);
    // printf("%d  -  %c \n", ft_isalpha(h), h);
    // printf("%d  -  %c \n", ft_isalpha(j), j);
    // printf("%d  -  EOF \n", ft_isalpha(EOF));

}