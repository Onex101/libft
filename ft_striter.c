#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	char *s_copy;
	int i;
	int len;

	s_copy = s;
	i = 0;
	len = ft_strlen(s);

	while (i < len)
	{
		f(s_copy+i);
		i++
	}
}
