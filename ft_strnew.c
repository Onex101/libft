#include "libft.h"

char * ft_strnew(size_t size)
{
	char *str;

	str = (char*)ft_memalloc(size);
	if (str == NULL)
	{
		return (NULL);
	}
	ft_memset(str, '\0', size + 1);
	return(str);
}
