#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*s_copy;
	int		i;

	s_copy = (const char *)str;
	i = 0;
	while (i < n)
	{	
		if (*(s_copy + i) == (char)c)
			{
				return ((void *)s_copy + i);
			}
		i++;
	}
	return (NULL);
}
