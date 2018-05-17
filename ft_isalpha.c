/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:13:44 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/15 08:13:46 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	char t;
	t = (char)c;
	if ((t >= 'A' && t <= 'Z') || (t >= 'a' && t <= 'z'))
		return (1);
	return (0);
}
