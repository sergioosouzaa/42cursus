/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:54:45 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 08:54:51 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int ch)
{
	return((ch > 64 && ch < 91) || (ch > 96 && ch < 123));
}

// #include<stdio.h>
// int	main(void)
// {
// 	printf("%d - 0\n", ft_isalpha('0'));
// 	printf("%d - a\n", ft_isalpha('a'));
// 	printf("%d - A\n", ft_isalpha('A'));
// 	printf("%d - *\n", ft_isalpha('*'));
// 	printf("%d - ]\n", ft_isalpha(']'));
// 	printf("%d -  \\0\n", ft_isalpha('\0'));
// }