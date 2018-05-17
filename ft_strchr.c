/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:16:27 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/15 08:16:28 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (i < (int)ft_strlen(str) + 1)
	{
		if (*(str + i) == (char)c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
