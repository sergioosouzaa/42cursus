/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdos-san <sdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:54:13 by sdos-san          #+#    #+#             */
/*   Updated: 2022/06/07 20:23:25 by sdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isalpha(int ch)
{
	return((ch > 64 && ch < 91) || (ch > 96 && ch < 123));
}

static int	ft_isdigit(int ch)
{
	return(ch >= 48 && ch <= 57);
}

int	ft_isalnum(int ch)
{
	return(ft_isdigit(ch) || ft_isalpha(ch));
}
