/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:02:47 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 09:02:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*tmp_str;
	size_t	s_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > (start + s_len))
		len = start + s_len;
	tmp_str = ft_calloc(len + 1, sizeof(char));
	if (tmp_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tmp_str[i] = s[start + i];
		i++;
	}
	return (tmp_str);
}
