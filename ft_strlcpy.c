/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:27:03 by ssukhija          #+#    #+#             */
/*   Updated: 2024/09/21 18:33:22 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	n;

	n = 0;
	src_len = ft_strlen(src);
//	while (src[i] != '\0')
//		i++;
	if (dstsize > (src_len + 1))
	{
		while (src[n] != '\0')
		{
			dst[n] = src[n];
			n++;
		}
	}
	else
	{
		while (n < dstsize)
		{
			dst[n] = src[n];
			n++;
		}
	}
	dst[dstsize -1] = '\0';
	return (src_len);
}
