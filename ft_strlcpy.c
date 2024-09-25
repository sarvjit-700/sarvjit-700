/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:27:03 by ssukhija          #+#    #+#             */
/*   Updated: 2024/09/23 11:10:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	n;

	n = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	else
	{
		if ((dstsize - 1) > src_len)
		{
			ft_memcpy(dst, src, src_len - 1);
			//while (src[n] != '\0')
		//	{
			//	dst[n] = src[n];
			//	n++;
		//	}
		}
		else
		{
			while (n < (dstsize - 1))
			{
				dst[n] = src[n];
				n++;
			}
		}
	}
	dst[n] = 0;
	return (src_len);
}
