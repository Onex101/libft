#include <libft.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		k;
	int		crt;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = 0;
	crt = 0;
	while (*(haystack + i) && !crt)
	{
		if (*(haystack + i) == *(needle + 0))
		{
			j = 0;
			k = i;
			crt = 1;
			while (*(needle + j))
				if (*(needle + j++) != *(haystack + k++))
					crt = 0;
			if (crt)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
