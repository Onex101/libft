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
#include <stdio.h>

static	int		ft_strcount(char const *s, char c)
{
	int i;
	int count;
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	return (count);
}

static	char	*ft_pull(char const *s, char c)
{
	int len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
	{
		len++;
	}
	return (ft_strsub(s, 0, len));	
}

static	char	*ft_strctrim(char const *s, char c)
{
	int		i;
	int		l;
	char	*sc;

	i = 0;
	l = ft_strlen(s) - 1;
	sc = ft_strdup(s);
	if (sc == NULL)
		return (NULL);
	if (*sc != c)
	{
		if (*(sc + l) != c)
			return (sc);
	}
	while (sc[l] == c)
		l--;
	sc[++l] = '\0';
	while (sc[i] == c)
	{
		i++;
	}
	return (sc + i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str_arr;
	int		num_words;
	int		i;
	char	*pnt;

	i = 0;
	num_words = ft_strcount(s, c);
	str_arr = (char **)malloc(sizeof(char *) * num_words);
	if (!str_arr)
		return (NULL);
	while (i < num_words)
	{
		s = ft_strctrim(s, c);
		pnt = malloc(ft_strlen(ft_pull(s, c)));
		pnt = ft_pull(s, c);
		str_arr[i] = ft_strnew(ft_strlen(pnt));
		ft_strcpy(str_arr[i], pnt);
		free(pnt);
		if (!(str_arr[i]))
			return (NULL);
		while (*s && *s != c && *s != '\0')
			s++;
		i++;
	}
	return (str_arr);
}
