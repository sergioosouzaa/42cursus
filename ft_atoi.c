/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:45:56 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/13 15:28:20 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isdigit(int ch)
{
	return (ch >= 48 && ch <= 57);
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
	while (ft_iswhitespace(*(str + pos)))
		pos++;
	if (*(str + pos) == '-')
	{
		sign = -1;
		pos++;
	}
	else if (*(str + pos) == '+')
		pos++;
	while (*(str + pos) && ft_isdigit(*(str + pos)))
	{
		output = (output * 10) + (*(str + pos) - '0');
		pos++;
	}
	return (output * sign);
}
