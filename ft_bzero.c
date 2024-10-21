/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:44:45 by marvin            #+#    #+#             */
/*   Updated: 2024/09/20 11:44:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;

//	if (!s)
//		return ;
	tmp = (char *) s;
	while (n > 0)
	{
		*(tmp++) = 0;
		n--;
	}
}

int main()
{
	// printf("Test 1")
	ft_bzero(NULL, 5);
	// printf("Test 2");
	// bzero(NULL, 5);
}
