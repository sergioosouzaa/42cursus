/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:25:11 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 20:31:26 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include "libft.h"

/* ************************************FT_ISALPHA***************************** */

int main(void)
{
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isalpha('a'));
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isalpha('A'));
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isalpha('Z'));
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isalpha('z'));	
	printf("OUTPUT: %d EXPECTED: 0\n", ft_isalpha('-'));	
	printf("OUTPUT: %d EXPECTED: 0\n", ft_isalpha('0'));	
}

/* ************************************FT_ISDIGIT***************************** */

int main(void)
{
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isdigit('0'));
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isdigit('9'));
	printf("OUTPUT: %d EXPECTED: 0\n", ft_isdigit('Z'));
	printf("OUTPUT: %d EXPECTED: 0\n", ft_isdigit('z'));	
	printf("OUTPUT: %d EXPECTED: 0\n", ft_isdigit('-'));	
	printf("OUTPUT: %d EXPECTED: 0\n", ft_isdigit('a'));	
}

/* ************************************FT_ISALNUM***************************** */

int main(void)
{
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isalnum('0'));
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isalnum('9'));
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isalnum('Z'));
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isalnum('z'));	
	printf("OUTPUT: %d EXPECTED: 0\n", ft_isalnum('-'));	
	printf("OUTPUT: %d EXPECTED: 0\n", ft_isalnum('*'));	
}

/* ************************************FT_ISASCII***************************** */

int main(void)
{
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isascii('0'));
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isascii('9'));
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isascii('Z'));
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isascii('z'));	
	printf("OUTPUT: %d EXPECTED: 0\n", ft_isascii(128));	
	printf("OUTPUT: %d EXPECTED: 0\n", ft_isascii(255));	
}

/* ************************************ft_isprint***************************** */

int main(void)
{
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isprint('A'));
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isprint('9'));
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isprint('Z'));
	printf("OUTPUT: %d EXPECTED: !0\n", ft_isprint('z'));	
	printf("OUTPUT: %d EXPECTED: 0\n", ft_isprint(5));	
	printf("OUTPUT: %d EXPECTED: 0\n", ft_isprint(2));	
}

/* ************************************ft_toupper***************************** */

int main(void)
{
	printf("OUTPUT: %c EXPECTED: A\n", ft_toupper('A'));
	printf("OUTPUT: %c EXPECTED: 9\n", ft_toupper('9'));
	printf("OUTPUT: %c EXPECTED: A\n", ft_toupper('a'));
	printf("OUTPUT: %c EXPECTED: Z\n", ft_toupper('z'));	
	printf("OUTPUT: %c EXPECTED: *\n", ft_toupper('*'));	
	printf("OUTPUT: %c EXPECTED:  \n", ft_toupper(' '));	
}

/* ************************************ft_tolower***************************** */

int main(void)
{
	printf("OUTPUT: %c EXPECTED: a\n", ft_tolower('A'));
	printf("OUTPUT: %c EXPECTED: 9\n", ft_tolower('9'));
	printf("OUTPUT: %c EXPECTED: a\n", ft_tolower('a'));
	printf("OUTPUT: %c EXPECTED: z\n", ft_tolower('Z'));	
	printf("OUTPUT: %c EXPECTED: *\n", ft_tolower('*'));	
	printf("OUTPUT: %c EXPECTED:  \n", ft_tolower(' '));	
}

/* ************************************ft_strlen***************************** */

int main(void)
{
	char b[20]={'P','r','o','g','r','a','m','\0'};
	printf("OUTPUT: %ld EXPECTED: 7\n", ft_strlen(b));
	printf("OUTPUT: %ld EXPECTED: 3\n", ft_strlen('ABC'));
	printf("OUTPUT: %ld EXPECTED: 0\n", ft_strlen(''));
	printf("OUTPUT: %ld EXPECTED: 6\n", ft_strlen('123654'));
}

/* ************************************ft_memset***************************** */

int main(void)
{
	char	nums[] = "0123456789";
	char	text[] = "ABCDEFGHIJ";

	printf("OUTPUT: %s EXPECTED: -123456789\n", ft_memset(nums, '-', 1));
	printf("OUTPUT: %s EXPECTED: AAAAAAAAAA\n", ft_memset(nums, 'A', 10));
	printf("OUTPUT: %s EXPECTED: \n", ft_memset(nums, '\0', 10));
}

/* ************************************ft_bzero***************************** */

int main(void)
{
	char	nums[] = "0123456789";
	char	text[] = "ABCDEFGHIJ";

	ft_bzero(nums, 1);
	ft_bzero(text, 1);
	printf("OUTPUT: %s EXPECTED: \n", nums);
	printf("NUMS[2]: %c EXPECTED: 2 \n", nums[2]);
	printf("OUTPUT: %s EXPECTED: \n", text);
	printf("text[9]: %c EXPECTED: J \n", nums[9]);
}

/* ************************************ft_memcpy***************************** */

int main(void)
{
	char	nums[] = "0123456789";
	char	text[] = "ABCDEFGHIJ";

	ft_memcpy(nums, "ABCDEFGHIJ", 10);
	ft_memcpy(text, "0123456789", 10);	
	printf("OUTPUT: %s EXPECTED: ABCDEFGHIJ\n", nums);
	printf("OUTPUT: %s EXPECTED: 0123456789\n", text);

	char txt[100] = "0123456789ABC";
    char *first, *second;
    first = txt;
    second = txt;
    ft_memcpy(first + 8, first, 10);
    printf("OUTPUT : %s EXṔECTED: 012345670123456789\n ", txt);
}

/* ************************************ft_memmove**************************** */

int main(void)
{
	char	nums[] = "0123456789";
	char	text[] = "ABCDEFGHIJ";

    ft_memmove(nums, text, sizeof(text));
	ft_memmove(text, "0123456789", 10);
	printf("OUTPUT: %s EXPECTED: ABCDEFGHIJ\n", nums);
	printf("OUTPUT: %s EXPECTED: 0123456789\n", text);

	char txt[100] = "0123456789ABC";
    char *first, *second;
    first = txt;
    second = txt;

    ft_memmove(second + 8, first, 10);
    printf("OUTPUT : %s EXṔECTED: 012345670123456701\n ", txt);

}

/* ************************************ft_strlcpy**************************** */

int main(void)
{
    char nums[] = "0123456789";
	char nums2[] = "0123456789";
	char nums3[] = "0123456789";
	char nums4[] = "0123456789";
    char buffer[19];
	char buffer2[19];
	char buffer3[19];
	char buffer4[19];
    int r;

    r = ft_strlcpy(buffer, nums, 1);
    printf("OUTPUT '%s' EXPECTED ' ', SIZE - OUTPUT: %d EXPECTED\n",buffer, r); 
	r = ft_strlcpy(buffer2,nums2, 2);
	printf("OUTPUT '%s' EXPECTED '0', SIZE - OUTPUT: %d EXPECTED\n", buffer2, r); 
	r = ft_strlcpy(buffer3,nums3, 3);
	printf("OUTPUT '%s' EXPECTED '01', SIZE - OUTPUT: %d EXPECTED\n", buffer3, r); 
	r = ft_strlcpy(buffer4,nums4, 10);
	printf("OUTPUT '%s' EXPECTED '012345678', SIZE - OUTPUT: %d EXPECTED\n", buffer4, r); 
}

/* ************************************ft_strlcat**************************** */

int main(void)
{
	char dst[100] = "1234";
	char src[100] = "ABCD";
	printf ("OUTPUT %ld EXPECTED 7\n", strlcat(dst, src, 3));
	printf ("OUTPUT %s EXPECTED 1234\n", dst);
	char dst1[100] = "1234";
	char src1[100] = "ABCD";
	printf ("OUTPUT %ld EXPECTED 8\n", strlcat(dst1, src1, 50));
	printf ("OUTPUT %s EXPECTED 1234ABCD\n", dst1);
}

/* ************************************ft_strchr**************************** */

int	main () {
	const char str1[] = "I am. Fearless!";
	const char ch1 = '.';
	char *ret;
	ret = ft_strchr(str1, ch1);
	printf("String after |%c| is - |%s|\n", ch1, ret);
	const char str2[] = "I am. Fearless!";
	const char ch2 = '!';
	char *ret2;
	ret2 = ft_strchr(str2, ch2);
	printf("String after |%c| is - |%s|\n", ch2, ret2);   
	const char str3[] = "I am. Fearless!";
	const char ch3 = '-';
	char *ret3;
	ret3 = ft_strchr(str3, ch3);
	printf("String after |%c| is - |%s|\n", ch3, ret3);   
}

/* ************************************ft_strrchr**************************** */

int main(void)
{
	const char str[] = "I. Am. Fearless!";
	const char ch = '.';
	char *ret;
	ret = ft_strrchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	const char str1[] = "I. Am. Fearless!.";
	const char ch1 = '.';
	char *ret1;
	ret1 = ft_strrchr(str1, ch1);
	printf("String after |%c| is - |%s|\n", ch1, ret1);
	const char str2[] = "I. Am. Fearless!.";
	const char ch2 = '-';
	char *ret2;
	ret2 = ft_strrchr(str2, ch2);
	printf("String after |%c| is - |%s|\n", ch2, ret2);
}

/* ************************************ft_strncmp**************************** */

int main(void)
{
	const char text[] = "I. Am. Fearless!";
	const char text2[] = 'I. Am Fearless!';
	ret = ft_strncmp(str, ch);
	printf("Resultado: %d \n",  ft_strncmp(text, text2, 6));
	printf("Resultado: %d \n",  ft_strncmp(text, text2, 2));
}