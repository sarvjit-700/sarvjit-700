/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowhex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:22:57 by ssukhija          #+#    #+#             */
/*   Updated: 2024/10/22 13:48:45 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_lowhex(long nb)
{
	int		count;
    char    *symbols;

    symbols = "0123456789abcdef";
	count = 0;
	if (nb < 16)
		count += ft_putchar(symbols[nb]);
	else
	{
		count += ft_lowhex(nb / 16);
		count += ft_lowhex(nb % 16);
	}
	return (count);
}