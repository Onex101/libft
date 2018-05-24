/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 06:56:54 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/21 06:58:14 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;
	int		str_len;

	str_len = ft_strlen(s);
	sub = ft_strnew(len);
	if (!sub)
		return (NULL);
	i = 0;
	if (!(s[len]) && !(s[start]) && sub == NULL)
	{
		return (NULL);
	}
	while (s[i] && i < (int)len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[len + 1] = '\0';
	return (sub);
}
