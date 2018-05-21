#include "libft.h"

static int	ft_intlen(int n)
{
	int i;

	i = 0;
	while (n)
	{
		n = n/10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char *str;
	int len;
	int tmp_num;

	len = ft_intlen(n);
	if (n < 0)
		len++;
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	len--;
	while (tmp_num)
	{
		str[len--] = tmp_num % 10 + 48;
		tmp_num = tmp_num/10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}