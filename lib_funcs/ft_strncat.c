#include <libft.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = (int)ft_strlen(dest);
	while (i < (int)n && *(src + i))
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	*(dest + j) = '\0';
	return (s1);
}
