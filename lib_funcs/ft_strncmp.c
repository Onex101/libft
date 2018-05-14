#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int		i;

	i = 0;
	while (*(str1 + i) && *(str1 + i) == *(str2 + i) && i < (int)n - 1)
		i++;
	if (n)
		return (*((unsigned char *)str1 + i) - *((unsigned char *)str2 + i));
	return (0);
}
