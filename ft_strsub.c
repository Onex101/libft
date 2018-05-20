#include "libft.h"

char *  ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;
	int i;

	sub = ft_strnew(len);
	i = 0;
	if (!(s[len]) || !(s[start]) || sub == NULL)
		return (NULL);
	while(*(sub[i]))
	{
		sub[i] = s[i + start];
		i++;
	}
	return(sub);
}