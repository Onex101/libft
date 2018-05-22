/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:39:43 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/22 10:39:46 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	printf("Test for ft_strjoin\n");
	char *str1 = "ABCDEFGHIJ";
	char *str2 = "abcdefghij";
	char *result = ft_strjoin(str1, str2);

	printf("The string should be: 'ABCDEFGHIJabcdefghij'\n");
	printf("Your function returned: '%s'\n", result);

	printf("\n");
	return (0);
}