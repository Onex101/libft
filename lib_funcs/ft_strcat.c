#include <libft.h>

char	*ft_strcat(char *dest, const char *src)
{
	int			i;
	int			j;

	i = 0;
	j = (int)ft_strlen(dest);
	while (*(src + i))
	{
		*(dest + j) = *(src + i);
		j++;
		i++;
	}
	*(dest + j) = '\0';
	return (dest);
}
