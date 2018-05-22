/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:00:55 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/22 13:19:21 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_strcount(char const *s, char c)
{
	int i;
	int count;
	ft_putstr("Enter ft_strcount\n");
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
		{
			count++;
		}
		i++;
	}
	ft_putstr("Exit ft_strcount\n");
	return (count);
}

static	char	*ft_pull(char const *s, char c)
{
	int len;
	ft_putstr("Enter ft_pull\n");

	len = 0;
	while (s[len] != c)
		len++;
	ft_putstr("Exit ft_pull\n");
	return (ft_strsub(s, 0, len));	
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str_arr;
	int		num_words;
	int		i;
	ft_putstr("Enter ft_strsplit\n");
	i = 0;
	num_words = ft_strcount(s, c);
	str_arr = (char **)malloc(sizeof(*s) * num_words);
	if (!str_arr)
		return (NULL);
	while (i < num_words)
	{
		ft_putstr("Enter ft_strsplit while loop\n");
		ft_strtrim(s);
		str_arr[i] = ft_pull(s, c);
		if (!str_arr[i])
			return (NULL);
		while (*s && *s != c)
			s++;
		i++;
		ft_putstr("Exit ft_strsplit while loop\n");
	}
	ft_putstr("Exit ft_strsplit");
	return (str_arr);
}
