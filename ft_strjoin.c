#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	char *n_str;

	i = 0;
	n_str = ft_strnew((ft_strlen(s1) + ft_strlen(s2)));
	if (n_str == NULL)
		return (NULL);
	while (*s1)
	{
		n_str[i++] = *s1++;
	}
	while (*s2)
	{
		n_str[i++] = *s2++;
	}
	return (n_str);
}