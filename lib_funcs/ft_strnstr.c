#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t		i;
	size_t		j;
	size_t		k;
	int			crt;

	i = 0;
	crt = 1;
	if (!ft_strlen(needle))
		return (NULL);
	while (*(haystack + i) && i < n)
	{
		j = 0;
		if (*(haystack + i) == *(needle + 0))
		{
			k = i;
			crt = 1;
			while (*(haystack + k) && *(needle + j) && j < n && k < n)
				if (*(haystack + k++) != *(needle + j++))
					crt = 0;
			if (crt && !*(needle + j))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
