/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:25:11 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/09 11:42:27 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
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
	printf("OUTPUT: %ld EXPECTED: 0\n", ft_strlen(' '));
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
    printf("OUTPUT : %s EXṔECTED: 012345670123456789\n ", txt);

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
	printf("Resultado: %d \n",  ft_strncmp(text, text2, 6));
	printf("Resultado: %d \n",  ft_strncmp(text, text2, 2));
}

/* ************************************ft_memchr**************************** */


int main (void) 
{
	const char str[] = "I am. Fearless";
	const char ch = '.';
	char *ret;
	ret = ft_memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
	const char str1[] = "I am. Fearless";
	const char ch1 = '\0';
	char *ret1;
	ret1 = ft_memchr(str1, ch1, 155);
	printf("String after |%c| is - |%s|\n", ch1, ret1);
}

/* ************************************ft_memcmp**************************** */

int main (void) 
{
	char str1[15] = "abcdef";
	char str2[15] = "ABCDEF";
	char str3[15] = "ABCDEg";
	char str4[15] = "ABCDEF";
	printf("OUTPUT %d EXPECTED 32 \n", ft_memcmp(str1, str2, 4));
	printf("OUTPUT %d EXPECTED  33\n", ft_memcmp(str3, str4, 6));
	printf("OUTPUT %d EXPECTED 33\n", memcmp(str3, str4, 6));	
	printf("OUTPUT %d EXPECTED 0\n", memcmp(str3, str4, 3));	
}

/* ************************************ft_strnstr**************************** */

int main(void)
{
    const char *largestring = "Foo Ba";
    const char *smallstring = "Bar";
    char	*ptr;
    ptr = ft_strnstr(largestring, smallstring, 10);
    printf("OUTPUT %s EXPECTED: NULL\n", ptr);
    const char *largestring1 = "Foo Ba";
    const char *smallstring1 = "Bar";
    ptr = ft_strnstr(largestring1, smallstring1, 0);
    printf("OUTPUT %s EXPECTED: NULL\n", ptr);
    const char *largestring2 = "Foo Bar Baz";
    const char *smallstring2 = "Bar";
    ptr = ft_strnstr(largestring2, smallstring2, 4);
    printf("OUTPUT %s EXPECTED: NULL\n", ptr);
    const char *largestring3 = "Foo Bar Baz";
    const char *smallstring3 = "Bar";
    ptr = ft_strnstr(largestring3, smallstring3, 10);
    printf("OUTPUT %s EXPECTED: Bar Baz\n", ptr);
    const char *largestring4 = "Foo Ba";
    const char *smallstring4 = "";
    ptr = ft_strnstr(largestring4, smallstring4, 10);
    printf("OUTPUT %s EXPECTED: Foo Ba\n", ptr);
}

/* ************************************ft_atoi**************************** */

int main(void)
{
    const char *num1 = "     -110.0";
    const char *num2 = "     110.0";
    const char *num3 = "     -110";
    const char *num4 = "     -110a";
    const char *num5 = "abcd";
    const char *num6 = "110";
    const char *num7 = "a110";
    const char *num8 = "\t\n \f 10";
    const char *num9 = "";
    const char *num10 = "2147483647";
    const char *num11 = "-2147483648";    
    printf("OUTPUT %d  EXPECTED -110\n", ft_atoi(num1));
    printf("OUTPUT %d  EXPECTED  110\n", ft_atoi(num2));
    printf("OUTPUT %d  EXPECTED -110\n", ft_atoi(num3));
    printf("OUTPUT %d  EXPECTED -110\n", ft_atoi(num4));
    printf("OUTPUT %d  EXPECTED  0\n", ft_atoi(num5));
    printf("OUTPUT %d  EXPECTED  110\n", ft_atoi(num6));
    printf("OUTPUT %d  EXPECTED   0\n", ft_atoi(num7));
    printf("OUTPUT %d  EXPECTED   10\n", ft_atoi(num8));
    printf("OUTPUT %d  EXPECTED    0\n", ft_atoi(num9));
    printf("OUTPUT %d  EXPECTED 2147483647\n", ft_atoi(num10));
    printf("OUTPUT %d  EXPECTED -2147483648\n", ft_atoi(num11));
}


/* ************************************ft_calloc**************************** */

int main(void)
{
    char* ptr;
	ptr =  ft_calloc(10, 1);
	int i = 0;
	while(i < 10)
	{
		printf("%c - \n", ptr[i]);
		i++;
	}
	free(ptr);
	ptr =  ft_calloc(10, 0);
	printf("OUTPUT %s EXPECTED null or \n", ptr);
}

/* ************************************ft_strdup**************************** */

int main(void)
{
    char txt[] = "Text";
	char* text_cpy;

	text_cpy =  ft_strdup(txt);
	printf("OUTPUT %s EXPECTED Text\n", text_cpy);
	free(text_cpy);
}

/* ************************************PART II**************************** */

/* ************************************ft_substr**************************** */

int main(void)
{
	char* nums = "0123456";
	printf("OUTPUT %s EXPECTED 123\n", ft_substr(nums, 1, 3));
	printf("OUTPUT %s EXPECTED \n", ft_substr(nums, 1, 0));
	printf("OUTPUT %s EXPECTED \n", ft_substr(nums, 8, 3));
}

/* **********************************ft_strjoin************************** */

int main(void)
{
	char* nums = "abcde";
	char* nums1 = "fghi";
	printf("OUTPUT %s EXPECTED abcdefghi\n", ft_strjoin(nums, nums1));
	char* nums2 = "abcde";
	char* nums3 = "";
	printf("OUTPUT %s EXPECTED abcde \n", ft_strjoin(nums2, nums3));
}

/* **********************************ft_strtrim************************** */

int main(void)
{
    char const* test = "12abc3123";
    char const* set = "123";
    printf("OUTPUT %s EXPECTED abc\n", ft_strtrim(test, set));
    char const* test1 = "12abc3123";
    char const* set1 = "123abc";
    printf("OUTPUT %s EXPECTED    \n", ft_strtrim(test1, set1));
    char const* test2 = "abc3123";
    char const* set2 = "123";
    printf("OUTPUT %s EXPECTED abc\n", ft_strtrim(test2, set2));
    char const* test3 = "12abc";
    char const* set3 = "123";
    printf("OUTPUT %s EXPECTED abc\n", ft_strtrim(test3, set3));
}


/* **********************************ft_split************************** */

int main(void)
{
    char** text = ft_split("a.a", '.');
    printf("%s \n", text[0]);
	printf("%s \n", text[1]);
	char** text = ft_split("..a..a..", '.');
    printf("%s \n", text[0]);
	printf("%s \n", text[1]);
	char** text = ft_split("..a..a", '.');
    printf("%s \n", text[0]);
	printf("%s \n", text[1]);
	char** text = ft_split("a..a..", '.');
    printf("%s \n", text[0]);
	printf("%s \n", text[1]);
	char** text = ft_split("aa", '.');
    printf("%s \n", text[0]);
	printf("%s \n", text[1]);
}

/* **********************************ft_itoa************************** */

int main(void)
{
	int n = -2147;
	char* converted = ft_itoa(n);
	printf("OUTPUT %s EXPECTED -2147\n", converted);
	free(converted);
	n = 0;
	converted = ft_itoa(n);
	printf("OUTPUT %s EXPECTED 0\n", converted);
	free(converted);
	n = 100;
	converted = ft_itoa(n);
	printf("OUTPUT %s EXPECTED 100\n", converted);
	free(converted);
	n = 2147483647;
	converted = ft_itoa(n);
	printf("OUTPUT %s EXPECTED 2147483647\n", converted);
	free(converted);
	n = -2147483648;
	converted = ft_itoa(n);
	printf("OUTPUT %s EXPECTED -2147483648\n", converted);
	free(converted);
}

/* **********************************ft_strmapi************************** */

static char	ft_tolower(unsigned int pos, char ch)
{
    if(ch >= 65 && ch <= 90)
        return(ch + 32 + (pos * 0));
    return(ch + (pos * 0));
}

#include<stdio.h>
int main(void)
{
	char (*func_pointer)(unsigned int, char);
	func_pointer = &ft_tolower;
	printf("OUTPUT %s EXPECTED abcdefghij \n", ft_strmapi("ABCDEFGHIJ", func_pointer));
}

/* **********************************ft_striteri************************** */

static void	ft_tolower(unsigned int pos, char* ch)
{
    if(*ch >= 65 && *ch <= 90)
		*ch = *(ch) + 32 + (pos * 0);
	else
		*ch = *(ch) + (pos * 0);
}

#include<stdio.h>
int main(void)
{
	void (*func_pointer)(unsigned int, char*);
	func_pointer = &ft_tolower;
	char	letters[] = "ABCDEFGHIJ";
	ft_striteri(letters, func_pointer);
	printf("OUTPUT %s EXPECTED abcdefghij \n", letters);
}

/* **********************************ft_putchar_fd************************** */

int main(void)
{
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('0', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('*', 1);
	ft_putchar_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(100, 1);
	ft_putchar_fd('\n', 1);
}

/* **********************************ft_putstr_fd************************** */

int main(void)
{
	ft_putstr_fd("Tufão & Safira \n", 1);
	ft_putstr_fd("0123456789abcdef \n", 1);
	ft_putstr_fd("\t \f 10 \n", 1);
}

/* **********************************ft_putendl_fd************************** */

int main(void)
{
	ft_putendl_fd("Tufão & Safira ", 1);
	ft_putendl_fd("0123456789abcdef ", 1);
	ft_putendl_fd("\t \f 10 ", 1);
}

/* **********************************ft_putnbr_fd************************** */

int main(void)
{
	ft_putendl_fd("Tufão & Safira ", 1);
	ft_putendl_fd("0123456789abcdef ", 1);
	ft_putendl_fd("\t \f 10 ", 1);
}

/* **********************************ft_putnbr_fd************************** */

int main(void)
{
	char new_line = '\n';
	ft_putnbr_fd(-2147483648, 1);
	write(1, &new_line, 1);
	ft_putnbr_fd(-2147483647, 1);
	write(1, &new_line, 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, &new_line, 1);
	ft_putnbr_fd(0, 1);
	write(1, &new_line, 1);
	ft_putnbr_fd(-115, 1);
	write(1, &new_line, 1);
	ft_putnbr_fd(1564, 1);
}