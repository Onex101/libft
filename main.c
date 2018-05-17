/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 08:36:49 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/17 08:41:08 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum_test() {
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';

   printf("Test ft_isalnum\n"); 
   if( ft_isalnum(var1) ) {
      printf("'d' = |%c| is alphanumeric\n", var1 );
   } else {
      printf("'d' = |%c| is not alphanumeric\n", var1 );
   }
   
   if( ft_isalnum(var2) ) {
      printf("'2' = |%c| is alphanumeric\n", var2 );
   } else {
      printf("'2' = |%c| is not alphanumeric\n", var2 );
   }
   
   if( ft_isalnum(var3) ) {
      printf("'\\t' = |%c| is alphanumeric\n", var3 );
   } else {
      printf("\\t = |%c| is not alphanumeric\n", var3 );
   }
   
   if( ft_isalnum(var4) ) {
      printf("' ' = |%c| is alphanumeric\n", var4 );
   } else {
      printf("' ' = |%c| is not alphanumeric\n", var4 );
   }
   printf("\n");

   return(0);
}

int ft_atoi_test()
{
	printf("Test ft_atoi\n");
	char str1[] = "";
	char str2[] = "-0";
	char str3[] = "123";
	char str4[] = "-123";
    int val1 = ft_atoi(str1);
    int val2 = ft_atoi(str2);
    int val3 = ft_atoi(str3);
    int val4 = ft_atoi(str4);
	printf ("\" \" = %d\n", val1);
    printf ("0 = %d\n", val2);
    printf ("123 = %d\n", val3);
    printf ("-123 = %d\n", val4);
    printf ("\n");
    return (0);
}

int ft_memset_test() 
{
   char str[50];

   printf("Test ft_memset\n");
   
   strcpy(str,"This is a libft.h function");
   puts(str);
   memset(str,'$',7);
   puts(str);
   printf("\n");

   return(0);
}

int ft_isalpha_test() {
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
   
   printf("Test ft_isalpha\n");
   if( ft_isalpha(var1) ) {
      printf("'d' = |%c| is an alphabet\n", var1 );
   } else {
      printf("'d' = |%c| is not an alphabet\n", var1 );
   }
   
   if( ft_isalpha(var2) ) {
      printf("2 = |%c| is an alphabet\n", var2 );
   } else {
      printf("2 = |%c| is not an alphabet\n", var2 );
   }
   
   if( ft_isalpha(var3) ) {
      printf("'\\t' = |%c| is an alphabet\n", var3 );
   } else {
      printf("'\\t' = |%c| is not an alphabet\n", var3 );
   }
   
   if( ft_isalpha(var4) ) {
      printf("" " = |%c| is an alphabet\n", var4 );
   } else {
      printf("" " = |%c| is not an alphabet\n", var4 );
   }
   printf("\n");

   return(0);
}

int main ()
{
	ft_atoi_test();
	ft_memset_test();
	ft_isalnum_test();
	ft_isalpha_test();

	return(0);
}
