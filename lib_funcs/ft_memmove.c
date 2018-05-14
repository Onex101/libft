#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*src_copy;
	char	*dst_copy;
	int		i;

	i = 0;

	while (i < (int)n)
	{
		*(dst_copy + i) = *(src_copy + i);
		i++;
	}
	return (dst);
}
