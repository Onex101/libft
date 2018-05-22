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

int		ft_strcounts(char const *s, char c)
{
	int i;
	int count;
	i = 0;
	count = 0;
	while (s[i] != '\0' s[])
	{
		if (s[i] != c)
		{
			count++;
		}
		i++;
	}
	return (count);
}

char	*ft_pull(char const *s, char c)
{
	int len;

	len = 0;
	while (s[len] != c)
		len++;
	return (ft_strsub(s, 0, len));	
}

int main(void)
{
	ft_putstr("Test for ft_strsplit\n");
	
	int i;
	char *str = "    Hi this is a pretty cool string      ";
	char **arr;

	ft_putnbr(ft_strcounts(str, ' '));
	ft_putchar('\n');
	i = 0;
	arr = ft_strsplit(str, ' ');
	while (arr[i])
	{
		ft_putstr(arr[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
