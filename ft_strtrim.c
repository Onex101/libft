/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 07:44:14 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/22 13:20:14 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		l;
	char	*sc;

	i = 0;
	l = ft_strlen(s) - 1;
	sc = ft_strdup(s);
	if (sc == NULL)
		return (NULL);
	if (*sc != 32 && *sc != '\n' && *sc != '\t')
	{
		if (*(sc + l) != 32 && *(sc + l) != '\n' && *(sc + l) != '\t')
			return (sc);
	}
	while (sc[l] == 32 || sc[l] == '\n' || sc[l] == '\t')
		l--;
	sc[++l] = '\0';
	while (sc[i] == ' ' || sc[i] == '\n' || sc[i]== '\t')
	{
		i++;
	}
	return (sc + i);
}
