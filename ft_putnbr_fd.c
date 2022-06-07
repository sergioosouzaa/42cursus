/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:59:01 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 08:59:51 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

static int	handle_negative(int fd)
{
	char	negative;

	negative = '-';
	write(fd, &negative, 1);
	return(-1);
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t	size;
	int		n_cpy;
	char	result;
	int		sign;

	sign = 1;
	n_cpy = n;
	size = 1;
	if (n < 0)
		sign = handle_negative(fd);
	while(n_cpy >= 10)
	{
		n_cpy = n_cpy/10;
		size = size * 10;
	}
	while(size > 0)
	{
		result = (sign * (n / size)) + '0';
		write(fd, &result, 1);
		n = n % size;
		size = size / 10;
	}
}

// int main(void)
// {
// 	ft_putnbr_fd(-2147483648, 1);
// }