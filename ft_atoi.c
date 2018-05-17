/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:12:39 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/15 08:12:57 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int num;
	int i;
	int sign;

	num = 0;
	i = 0;
	sign = 1;
	if (*(str + i) == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(*(str + i)))
	{
		num = (num * 10) + (*(str + i) - 48);
		i++;
	}
	return (num * sign);
}
