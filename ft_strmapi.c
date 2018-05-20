#include "libft.h"

char *  ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char *r_str;
	int i;

	r_str = ft_strnew(ft_strlen(s));
	if (r_str)
	{
		i = 0;
		while (*(s+i))
		{
			r_str[i] = (*f)(i, s[i]);
			i++;
		}
		return(r_str);
	}
	return(NULL);
}
