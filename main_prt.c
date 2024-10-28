#include <limits.h>
#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    int	result;
    int	result2;
    int	num;
        
    len = ft_printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX +1024;
    addr = (void *)0x7ffe637541f0;

    printf("\n********num tests************\n");
    result = printf("Length: [%d, %i]\n", len2, len2);
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Length: [%d, %i]\n", len, len);
    printf("%d characters using FT_PRINTF\n\n", result2);

    result = printf("Negative:[%d]\n", -762534);
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Negative:[%d]\n", -762534);
    printf("%d characters using FT_PRINTF\n\n", result2);

    result = printf("Unsigned:[%u]\n", ui);
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Unsigned:[%u]\n", ui);
    printf("%d characters using FT_PRINTF\n\n", result2);

    len2 = printf("Percent:[%%]\n");
    printf("%d characters using printf\n", result);
    len = ft_printf("Percent:[%%]\n");
    printf("%d characters using FT_PRINTF\n\n", result2);

    result = printf("Len:[%d]\n", len2);
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Len:[%d]\n", len);
    printf("%d characters using FT_PRINTF\n", result2);
    printf("\n********************\n");


    printf("\n********char/string tests************\n");
    result = printf("Character:[%c]\n", 'H');
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Character:[%c]\n", 'H');
    printf("%d characters using FT_PRINTF\n\n", result2);

    result = printf("String:[%s]\n", "Test string");
    printf("%d characters using printf\n", result);
    result2 = ft_printf("String:[%s]\n", "Test string");
    printf("%d characters using FT_PRINTF\n", result2);
	printf("\n********************\n");

    printf("\n********pointer tests************\n");
    result = printf("Address if NULL:[%p]\n", NULL);
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Address if NULL:[%p]\n", NULL);
    printf("%d characters using FT_PRINTF\n\n", result2);
    
    result = printf("pointer test : %p", "slim");
	printf("\n%d characters using printf\n", result);
	result2 = ft_printf("pointer test : %p", "slim");
	printf("\n%d characters using FT_PRINTF\n\n", result2);

    result = printf("Address:[%p]\n", addr);
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Address:[%p]\n", addr);
    printf("%d characters using FT_PRINTF\n\n", result2);
    
    result = printf("Address of the sentence in len is :[%p]\n", &len);
    printf("%d characters using printf\n", result);
    result2 = ft_printf("Address of the sentence in len is :[%p]\n", &len);
    printf("%d characters using FT_PRINTF\n", result2);
	printf("\n********************\n");    

    printf("\n********hex tests************\n");
    num = -42;
	result = printf("%x", num);
	printf("\n%d characters using printf\n", result);
	result2 = ft_printf("%x", num);
	printf("\n%d characters using FT_PRINTF\n\n", result2);

    result = ft_printf("Unsigned hex:[%x, %X]\n", ui, ui);
    printf("%d characters using printf\n", result);
    result2 = printf("Unsigned hex:[%x, %X]\n", ui, ui);
    printf("%d characters using FT_PRINTF\n", result2);

	printf("\n********************\n");

}
