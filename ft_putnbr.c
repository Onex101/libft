/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:14:59 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/22 13:15:02 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intlen(int n)
{
	int		i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int n)
{
	char str[20];
	int i;
	int len;

	len = ft_intlen(n);
	i = 0;
	if (n < 0)
		str[-i] = '-';
	if (n == 0)
		ft_putstr("0\0");
	str[len + 1] = '\0';
	while (n)
	{
		str[--len] = n % 10 + 48;
		n = n / 10;
	}
	ft_putstr(str);
}
