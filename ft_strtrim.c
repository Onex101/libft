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
	l = ft_strlen(s);
	sc = ft_strnew(l);
	if (sc == NULL)
		return (NULL);
	if (*s != ' ' || *s != '\n' || *s != '\t')
		if (*(s + l) != ' ' || *(s + l) != '\n' || *(s + l) != '\t')
			return (sc);
	while (*(sc + i) == ' ' || *(s + i) == '\n' || *(sc + i) == '\t')
		i++;
	while (sc[l] == ' ' || sc[l] == '\n' || sc[l] == '\t')
		l--;
	sc[++l] = '\0';
	return (sc);
}
