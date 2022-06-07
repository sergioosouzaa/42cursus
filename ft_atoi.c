/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:45:56 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 08:52:29 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isdigit(int ch)
{
	return(ch >= 48 && ch <= 57);
}
	
static int	ft_iswhitespace(int ch)
{
	return ((ch >= 9 && ch <= 13) || ch == 32);
}
	
int	ft_atoi(const char *str)
{
	unsigned int	pos;
	int				output;
	int				sign;

	output = 0;
	sign = 1;
	pos = 0;
	while(ft_iswhitespace(*(str + pos)))
		pos++;
	if(*(str + pos) == '-')
	{
		sign = -1;
		pos++;
	}     
	while(*(str + pos) && ft_isdigit(*(str + pos)))
	{
		output = (output * 10) + (*(str + pos) - '0');
		pos++;
	}
	return(output * sign);
}

// #include <stdio.h>
// int main(void)
// {
//     const char *num1 = "     -110.0";
//     const char *num2 = "     110.0";
//     const char *num3 = "     -110";
//     const char *num4 = "     -110a";
//     const char *num5 = "abcd";
//     const char *num6 = "110";
//     const char *num7 = "a110";
//     const char *num8 = "\t\n \f 10";
//     const char *num9 = "";
//     const char *num10 = "2147483647";
//     const char *num11 = "-2147483648";    
//     printf("%d \n", ft_atoi(num1));
//     printf("%d \n", ft_atoi(num2));
//     printf("%d \n", ft_atoi(num3));
//     printf("%d \n", ft_atoi(num4));
//     printf("%d \n", ft_atoi(num5));
//     printf("%d \n", ft_atoi(num6));
//     printf("%d \n", ft_atoi(num7));
//     printf("%d \n", ft_atoi(num8));
//     printf("%d \n", ft_atoi(num9));
//     printf("%d \n", ft_atoi(num10));
//     printf("%d \n", ft_atoi(num11));
// }