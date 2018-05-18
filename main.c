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

int ft_isascii_test() {
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';

   printf("Test ft_isascii\n"); 
   if( ft_isascii(var1) ) {
      printf("'d' = |%c| is ascii\n", var1 );
   } else {
      printf("'d' = |%c| is not ascii\n", var1 );
   }
   
   if( ft_isascii(var2) ) {
      printf("'2' = |%c| is ascii\n", var2 );
   } else {
      printf("'2' = |%c| is not ascii\n", var2 );
   }
   
   if( ft_isascii(var3) ) {
      printf("'\\t' = |%c| is ascii\n", var3 );
   } else {
      printf("\\t = |%c| is not ascii\n", var3 );
   }
   
   if( ft_isascii(var4) ) {
      printf("' ' = |%c| is ascii\n", var4 );
   } else {
      printf("' ' = |%c| is not ascii\n", var4 );
   }
   printf("\n");

   return(0);
}

int ft_isdigit_test() {
   int var1 = 'h';
   int var2 = '2';
    
  printf("Test ft_isdigit\n"); 
   if( ft_isdigit(var1) ) {
      printf("'h' = |%c| is a digit\n", var1 );
   } else {
      printf("'h' = |%c| is not a digit\n", var1 );
   }
   
   if( ft_isdigit(var2) ) {
      printf("'2' = |%c| is a digit\n", var2 );
   } else {
      printf("'2' = |%c| is not a digit\n", var2 );
   }
   printf("\n");

   return(0);
}

int ft_isprint_test() {
   int var1 = 'k';
   int var2 = '8';
   int var3 = '\t';
   int var4 = ' ';
  
   printf("Test ft_isprint\n"); 
   if( ft_isprint(var1) ) 
   {
      printf("'k' = |%c| can be printed\n", var1 );
   } 
   else 
   {
      printf("'k' = |%c| can't be printed\n", var1 );
   }
   
   if( ft_isprint(var2) ) 
   {
      printf("'8' = |%c| can be printed\n", var2 );
   } 
   else 
   {
      printf("'8' = |%c| can't be printed\n", var2 );
   }
   
   if( ft_isprint(var3) ) 
   {
      printf("'\t' = |%c| can be printed\n", var3 );
   } 
   else 
   {
      printf("'\t' = |%c| can't be printed\n", var3 );
   }
   
   if( ft_isprint(var4) ) 
   {
      printf("' ' = |%c| can be printed\n", var4 );
   } 
   else 
   {
      printf("' ' = |%c| can't be printed\n", var4 );
   }
   printf("\n");
   
   return(0);
}  

int ft_memccpy_test()
{
   printf("Test ft_memccpy\n"); 
   char* msg = "This is the string: not copied";
   char buffer[20];

   ft_memset(buffer, '\0', 20);
   memccpy(buffer, msg, ':', 20);

   printf( "%s\n", msg);
   printf( "%s\n", buffer);
   printf("\n");
    
   return (0);
}

int ft_memchr_test() 
{
   printf("Test ft_memchr\n"); 
   const char str[] = "This is a string. Ting a ling a ling";
   const char ch = '.';
   char *ret;
   printf("Original String: This is a string. Ting a ling a ling\n");

   ret = ft_memchr(str, ch, ft_strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("\n");

   return(0);
}

int ft_memcmp_test() {
   char str1[15];
   char str2[15];
   int ret;

   ft_memcpy(str1, "abcdef", 6);
   ft_memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);
   printf("Test ft_memcmp\n"); 
   if(ret > 0) {
      printf("str2 is less than str1\n");
   } else if(ret < 0) {
      printf("str1 is less than str2\n");
   } else {
      printf("str1 is equal to str2\n");
   }
   printf("\n");
   return(0);
   
}

int ft_memcpy_test()
{
   printf("Test ft_memcpy\n");
   const char src[29] = "This string is not very long";
   char dest[9];
   ft_strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   printf("\n");
   
   return(0);
}

int ft_memmove_test()
{
   printf("Test ft_memmove\n");
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   printf("\n");

   return(0);
}

int ft_strcat_test()
{
   printf("Test ft_strcat\n");
   char src[50], dest[50];

   ft_strcpy(src,  "This is source");
   ft_strcpy(dest, "This is destination");

   ft_strcat(dest, src);

   printf("Final destination string : |%s|\n", dest);
   printf("\n");
   
   return(0);
}

int ft_strchr_test()
{
   printf("Test ft_strchr\n");
   const char str[] = "This is a string. It has characters.\n";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - %s", ch, ret);
   printf("\n");
   
   return(0);
}

int ft_strcmp_test()
{
   printf("Test ft_strcmp\n");
   char str1[15];
   char str2[15];
   int ret;


   ft_strcpy(str1, "abcdef");
   ft_strcpy(str2, "ABCDEF");

   ret = ft_strcmp(str1, str2);

   if(ret < 0) {
      printf("str1 is less than str2\n");
   } else if(ret > 0) {
      printf("str2 is less than str1\n");
   } else {
      printf("str1 is equal to str2\n");
   }
   printf("\n");
   return(0);
}

int ft_strcpy_test()
{
   printf("Test ft_strcpy\n");
   char src[40];
   char dest[100];
  
   ft_memset(dest, '\0', sizeof(dest));
   ft_strcpy(src, "Copied before it d\0 ied");
   ft_strcpy(dest, src);

   printf("Final copied string : %s\n", dest);
   printf("\n");
   return(0);
}

int ft_strdup_test()
{
   printf("Test ft_strdup\n");
   char *p1 = "Its almost ready";
   char *p2;
   p2 = ft_strdup(p1);
 
   printf("Duplicated string is : %s\n", p2);
   printf("\n");
   return 0;
}

int ft_strlcat_test()
{
   printf("Test ft_strlcat\n");
   char pnt2[20] = "Hey hey hey";
   char pnt1[20] = "Hi hi hi";

   printf("The Original string is : %s\n", pnt1);
   ft_strlcat(pnt1, pnt2, 13);
   printf("Concatenated string is : %s\n", pnt1);
   printf("\n");
   return (0);
}

int ft_strlen_test()
{ 
   printf("Test ft_strlen\n");
   char str[50];
   int len;

   ft_strcpy(str, "This is not a long long");

   len = ft_strlen(str);
   printf("Length of |%s| is |%d|\n", str, len);
   
   printf("\n");
   return (0);
}

int ft_strncat_test()
{
   printf("Test ft_strcat\n");
   char src[50], dest[50];

   ft_strcpy(src,  "This is source");
   ft_strcpy(dest, "This is destination");

   ft_strncat(dest, src, 15);

   printf("Final destination string : |%s|\n", dest);
   
   printf("\n");
   return (0);
}

int ft_strncmp_test()
{
   printf("Test ft_strncmp\n");
   char str1[15];
   char str2[15];
   int ret;

   ft_strcpy(str1, "abcdef");
   ft_strcpy(str2, "ABCDEF");

   ret = ft_strncmp(str1, str2, 4);

   if(ret < 0) 
   {
      printf("str1 is less than str2\n");
   } 
   else if(ret > 0)
   {
      printf("str2 is less than str1\n");
   } 
   else 
   {
      printf("str1 is equal to str2\n");
   }
   
   printf("\n");
   return (0);
}

int ft_strncpy_test()
{
   printf("Test ft_strncpy\n");
   char src[40];
   char dest[12];
  
   ft_memset(dest, '\0', sizeof(dest));
   ft_strcpy(src, "This is a wonderful string");
   ft_strncpy(dest, src, 10);

   printf("Final copied string : %s\n", dest);
   
   printf("\n");
   return (0);
}

int ft_strnstr_test()
{
   printf("Test ft_strnstr\n");
   const char haystack[] = "This string contains a needle over here";
   const char needle[] = "needle";
   char *ret;

   ret = ft_strnstr(haystack, needle, ft_strlen(haystack));

   printf("The substring is: %s\n", ret);
   
   printf("\n");
   return (0);
}

int ft_strrchr_test()
{
   printf("Test ft_strrchr\n");
   int len;
   const char str[] = "This is a cool string";
   const char ch = 'a';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   printf("\n");
   return (0);
}

int ft_strstr_test()
{
   printf("Test ft_strstr\n");
   const char haystack[] = "This string contains a needle over here";
   const char needle[] = "needle";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   printf("\n");
   return (0);
}

int main ()
{
	ft_atoi_test();
	ft_memset_test();
	ft_isalnum_test();
	ft_isalpha_test();
   ft_isascii_test();
   ft_isdigit_test();
   ft_isprint_test();
   ft_memccpy_test();
   ft_memchr_test();
   ft_memcmp_test();
   //ft_memcpy_test();
   ft_memmove_test();
   ft_strcat_test();
   ft_strchr_test();
   ft_strcmp_test();
   ft_strcpy_test();
   ft_strdup_test();
   ft_strlcat_test();
   ft_strlen_test();
   ft_strncat_test();
   ft_strncmp_test();
   ft_strncpy_test();
   ft_strnstr_test();
   ft_strrchr_test();
   ft_strstr_test();

	return(0);
}
