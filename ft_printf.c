/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:58:58 by ssukhija          #+#    #+#             */
/*   Updated: 2024/10/22 13:48:53 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h> //for testing

int	ft_checkelmt(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(args, char *));
//	else if (specifier == 'p')
//		count += ft_ptr(va_args(args, *ptr));
	else if (specifier == 'd')
		count += ft_putnbr(va_arg(args, int));
//	else if (specifier == 'u')
	else if (specifier == 'x')
		count += ft_lowhex((long)va_arg(args, unsigned int));
	else
		count += ft_putchar(specifier);
	return count;
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int	count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{	count += ft_checkelmt(format[i + 1], args);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

int	main()
{
	int	result;
	int	result2;
	int	num;
/* 
	result = printf("print 1 char %c", 'E');
	printf("\n%d characters using printf\n", result);
	
	result2 = ft_printf("print 1 char %c", 'E');
	printf("\n%d characters using FT_PRINTF\n", result2);
	printf("\n********************\n");

	result = printf("hello my name is %s", "slim");
	printf("\n%d characters using printf\n", result);
	
	result2 = ft_printf("hello my name is %s", "slim");
	printf("\n%d characters using FT_PRINTF\n", result2);
	printf("\n********************\n");

//	result = printf("printing pointer %p", "slim");
//	printf("\n%d characters using printf\n", result);
	
//	result2 = ft_printf("printing pointer %p", "slim");
//	printf("\n%d characters using FT_PRINTF\n", result2);
//	printf("\n********************\n");
	 
	num = 4;
	result = printf("print number %d", num);
	printf("\n%d characters using printf\n", result);
	
	result2 = ft_printf("print number %d", num);
	printf("\n%d characters using FT_PRINTF\n", result2);
	printf("\n********************\n");*/
	num = -42;
	result = printf("print hex: %x", num);
	printf("\n%d characters using printf\n", result);
	
	result2 = ft_printf("print hex: %x", num);
	printf("\n%d characters using FT_PRINTF\n", result2);
	printf("\n********************\n");
}

