/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:25:02 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/22 10:25:04 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("Test for ft_strnequ\n");

	char *str1 = "ABCDEFGHIJ";
	char *str2 = "ABCdehghij";

	if (ft_strnequ(str1, str2, 3))
		printf("Strings are equal: %s, %s\n", str1, str2);
	else
		printf("Strings are not equal: %s, %s\n", str1, str2);

	printf("\n");
	return (0);
}
