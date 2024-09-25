/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:03:03 by marvin            #+#    #+#             */
/*   Updated: 2024/09/20 12:03:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;

	if (dst == NULL && src == NULL)
		return (dst);
	tmp_src = (unsigned char *) src;
	tmp_dst = (unsigned char *) dst;
	while (n > 0 && tmp_src != 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		n--;
	}
	return (dst);
}
