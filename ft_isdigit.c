/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:55:21 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 08:55:27 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int ch)
{
	return(ch >= 48 && ch <= 57);
}

// #include<stdio.h>
// int	main(void)
// {
// 	printf("%d - 0\n", ft_isdigit('0'));
// 	printf("%d - a\n", ft_isdigit('a'));
// 	printf("%d - A\n", ft_isdigit('A'));
// 	printf("%d - *\n", ft_isdigit('*'));
// 	printf("%d - aiscii150\n", ft_isdigit(150));
// 	printf("%d -  9\n", ft_isdigit('9'));
// }