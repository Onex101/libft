/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:41:00 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/29 12:41:23 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_zero(void)
{
	char *str;

	str = ft_memalloc(2);
	if (!str)
		return (NULL);
	*str = '0';
	str[1] = '\0';
	return (str);
}
