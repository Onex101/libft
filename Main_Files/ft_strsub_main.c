/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:28:24 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/22 10:28:30 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


int    main()
{
	ft_putstr("Test for ft_strsub\n");
    const char *p = "Im a string";

    printf("The string should return 'string': %s\n", ft_strsub(p, 5, 6));

    ft_putchar('\n');
    return(1);
}