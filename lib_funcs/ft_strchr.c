#include <libft.h>

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (i < (int)ft_strlen(str) + 1)
	{
		if (*(str + i) == (char)c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
