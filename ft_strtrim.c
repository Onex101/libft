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

	i = 0;
	l = ft_strlen(s) - 1;
	if (*s != ' ' && *s != '\n' && *s != '\t')
	{
		if (*(s + l) != ' ' && *(s + l) != '\n' && *(s + l) != '\t')
			return (ft_strdup(s));
	}
	while (s[i] == ' ' || s[i] == '\n' || s[i]== '\t')
		{
			i++;
			if(!s[i])
				return (ft_strnew(l));
		}
	while (s[l] == ' ' || s[l] == '\n' || s[l] == '\t')
		l--;

	return (ft_strsub(s, i, (l - i + 1)));
}

int main(void)
{
	char *s1 = "   \t  \n\n \t\t  \n\n\n";
	char *s2 = "";
	char *ret = ft_strtrim(s1);

	if (!ft_strcmp(ret, s2))
	{
		ft_putstr("Correct\n");
	}
	else
	{
		ft_putstr(ret);
		ft_putstr("Wrong\n");
	}
	return(0);
}

