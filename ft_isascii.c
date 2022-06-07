/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:55:12 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 08:55:13 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int ch)
{
	return(ch >= 0 && ch <= 127);
}

// #include<stdio.h>
// int	main(void)
// {
// 	printf("%d - 0\n", ft_isascii('0'));
// 	printf("%d - a\n", ft_isascii('a'));
// 	printf("%d - A\n", ft_isascii('A'));
// 	printf("%d - *\n", ft_isascii('*'));
// 	printf("%d - aiscii150\n", ft_isascii(150));
// 	printf("%d -  aiscii170\n", ft_isascii(170));
// }