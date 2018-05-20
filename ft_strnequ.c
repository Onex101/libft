#include "libft.h"

int  ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	if (s1 && s2)
	{
		i = 0;
		while (s1[i] != 0 && i < (int)n)
		{
			i++;
			if (s1[i] != s2[i])
				return (0);
		}
		return (1);
	}
	return (0);
}