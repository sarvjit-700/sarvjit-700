/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:52:06 by ssukhija          #+#    #+#             */
/*   Updated: 2024/10/04 16:17:01 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char *s, char c)
{
	int	word;
	int	i;
	int	count;

	i = 0;
	count = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && word == 0)
		{
			word = 1;
			count++;
		}
		else if (s[i] == c)
			word = 0;
		i++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	char	**arr;
	int	count;

	if (s == NULL)
		return (NULL);
	count = ft_wordcount((char *)s, c);
}
