/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:39:54 by ssukhija          #+#    #+#             */
/*   Updated: 2024/09/25 14:40:09 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ans;
	size_t	i;
	size_t	j;


	i = 0;
	j = 0;
	ans = NULL;
	if (needle == 0)
		return ((char *) &haystack[i]);
/*	while (i < len)
	{
		if (needle[i] == haystack[j])
		{

			ans = ((char *) &haystack[j]);
		else
			j++;
	}*/
	return (ans);
}
