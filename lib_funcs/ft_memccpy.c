#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*ptr;
	int	i;

	i = 0;
	ptr = dst;
	while (i < n)
	{
		*(ptr + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)src + i) == (unsigned char)c)
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
