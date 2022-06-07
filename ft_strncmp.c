/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:04:41 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 09:04:54 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	size_t	pos;

	pos = 0;
	while(pos < count && *(str1 + pos) && *(str2 + pos))
	{
		if(*(str1 + pos) != *(str2 + pos))
			break;
		pos++;
	}
	return(*(str1 + pos) - *(str2 + pos));
}

// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
//     char str1[10] = "akash";
//     char str2[10] = "aksh";
//     int result = ft_strncmp(str1, str2, 20);
// 	int results = strncmp(str1, str2, 20);
//     printf("Value returned by ft_strncmp() is: %d | %d \n", result, results);
// 	char str3[10] = "akash";
//     char str4[10] = "akash";
//     int result2 = ft_strncmp(str3, str4, 20);
// 	int results2 = strncmp(str3, str4, 20);
//     printf("Value returned by ft_strncmp() is: %d | %d \n", result2, results2);
// 	char str5[10] = "";
//     char str6[10] = "akash";
//     int result3 = ft_strncmp(str5, str6, 20);
// 	int results3 = strncmp(str5, str6, 20);
//     printf("Value returned by ft_strncmp() is: %d | %d \n", result3, results3);
// 	char str7[10] = "akash";
//     char str8[10] = "";
//     int result4 = ft_strncmp(str7, str8, 20);
// 	int results4 = strncmp(str7, str8, 20);
//     printf("Value returned by ft_strncmp() is: %d | %d \n", result4, results4);
// }