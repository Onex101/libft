/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:16:17 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/22 10:16:20 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("Test for ft_strequ\n");

	char *str1 = "ABCDEFGHIJ";
	char *str2 = "abcdefghij";

	if (ft_strequ(str1, str2))
		printf("Strings are equal: %s, %s\n", str1, str2);
	else
		printf("Strings are not equal: %s, %s\n", str1, str2);

	printf("\n");
	return (0);
}
