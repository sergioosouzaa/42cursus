char	*ft_strchr(const char *str, int c)
{
	unsigned int	pos;

	pos = 0;
	while (*(str + pos) != '\0')
	{
		if(*(str + pos) == c)
			return (str + pos);
	}
	return ((void*)0);
}