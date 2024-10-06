/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:39:54 by ssukhija          #+#    #+#             */
/*   Updated: 2024/10/06 09:53:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == 0)
		return ((char *) &haystack[i]);
	if (haystack[i] == '\0')
		return (NULL);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (((i + j) < len) && (needle[j] != '\0')
			&& (haystack[i + j] == needle[j]))
			j++;
		if (needle[j] == '\0')
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
