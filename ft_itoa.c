/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:10:01 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/22 13:10:31 by xrhoda           ###   ########.fr       */
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

static	char	*ft_zero(void)
{
	char *str;

	str = ft_memalloc(2);
	if (!str)
		return (NULL);
	*str = '0';
	str[1] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			len;
	long		tmp_num;

	len = ft_intlen(n);
	tmp_num = n;
	if (n < 0)
	{
		tmp_num *= -1;
		len++;
	}
	if (tmp_num == 0)
		return (ft_zero());
	str = ft_memalloc(len + 1);
	if (!str)
		return (NULL);
	str[len + 1] = '\0';
	while (tmp_num)
	{
		str[--len] = tmp_num % 10 + 48;
		tmp_num = tmp_num / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
