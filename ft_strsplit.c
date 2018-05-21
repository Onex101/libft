/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:00:55 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/21 08:32:26 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int ft_strcount(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] = c && s[i + 1] != c)
		{
			count++;
		}
		i++;	
	}
	return (count);
}

static int ft_strslen(char const *s, char c)
{
	int i;

	while (*s == c)
		s++;
	while (*s && *s != c)
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char 	**str_arr;
	int 	num_words;
	int		i;

	i = 0;
	num_words = ft_strcount(s, c);
	str_arr = (char **)malloc(sizeof(*str) * num_words);
	if (!str_arr)
		return(NULL);
	while (i < num_words)
	{
		str_arr[i] = (char *)malloc(ft_strslen(s , c));
		if (!str_arr[i])
			return(NULL);
		while (*s == c)
			s++;
		while (*s && *s != c)
			s++;
		i++;
	}
	return (str_arr);
}
