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
#include <stdio.h>

static	long	int	ft_getnum(const char *str)
{
	long int num;
	int sign;

	num = 0;
	sign = 1;
	
	while (*str == ' ' || *str == '\t' || *str == '\f' ||*str == '\v' || *str == '\r')
			str++;
	while (*str)
	{
		if (*(str) == '-')
		{
			sign = -1;
			str++;
		}
		if (ft_isdigit(*str))
			num = (num * 10) + (*(str) - 48);
		if (!ft_isdigit(*str))
			break;
		str++;
	}
	return (num * sign);
}

int		ft_atoi(const char *str)
{
	long int num;
	long int max;
	long int min;

	max = 9223372036854775807;
	min = -9223372036854775807 - 1;
	num = ft_getnum(str);
	if (num > max)
		return (-1);
	if (num < min)
		return (0);
	return ((int)num);
}

/*int main(void)
{
	char *n = "9999999999999999990";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);

	if (i1 == i2)
		ft_putstr("Worked");
	else
		ft_putstr("Nope");
	ft_putchar('\n');
	printf("Theirs = %d\n", i1);
	ft_putchar('\n');
	printf("Mine = %d", i2);
	return (0);
}*/
