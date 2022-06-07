/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:55:34 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 08:55:40 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int ch)
{
	return(ch >= 32 && ch <= 126);
}

// #include<stdio.h>
// int	main(void)
// {
// 	printf("%d - 0\n", ft_isprint('0'));
// 	printf("%d - \\0\n", ft_isprint('\0'));
// 	printf("%d - A\n", ft_isprint('A'));
// 	printf("%d - \\v\n", ft_isprint('\v'));
// }