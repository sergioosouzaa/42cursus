int ft_toupper(int ch)
{
    if (ch >= 97 && ch <= 122)
        return (ch - 32);
    return (ch);
}
