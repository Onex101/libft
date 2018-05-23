/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:01:04 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/22 14:05:16 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	ft_putstr("Test for ft_strsplit\n");
	
	int i;
	char *str = "*Hi*this*is***  but i dont think that this would work    a***pretty*cool****string******";
	char **arr;

	i = 0;
	arr = ft_strsplit(str, '*');
	while (i < 7)
	{
		ft_putstr(arr[i]);
		i++;
		ft_putchar('\n');
	}
	return (0);
}
