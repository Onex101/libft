#include "libft.h"

void  ft_striteri(char *s, void (*f)(unsigned int,char *))
{
	char *s_copy;
	int i;
	int len;

	s_copy = s;
	i = 0;
	len = ft_strlen(s);

	while (i < len)
	{
		f(i, s_copy+i);
		i++
	}
}
