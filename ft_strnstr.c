/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:39:54 by ssukhija          #+#    #+#             */
/*   Updated: 2024/09/27 12:02:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ans;
	size_t	i;
	size_t	j;


	i = 0;
	j = 0;
	ans = NULL;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (i < len && (needle[j] != '\0' || haystack[i] != '\0'))
	{
		if (needle[j] == haystack[i])
		{
			ans = ((char *) &haystack[i]);
			while (needle[j] == haystack[i])
			{
				j++;
				i++;
			}
			i--;
		}
		if (i < len && (needle[j] != '\0' || haystack[i] != '\0'))
			return (ans);
		else
		{
		i++;
		j = 0;
		ans = NULL;
		}
	}
	return (ans);
}
