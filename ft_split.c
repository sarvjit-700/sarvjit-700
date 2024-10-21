/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:52:06 by ssukhija          #+#    #+#             */
/*   Updated: 2024/10/08 08:33:11 by ssukhija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char *s, char c)
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

static char	*ft_word(char *s, char c)
{
	char	*word;
	int		i;
	int		word_len;

	i = 0;
	word_len = 0;
	while (s[word_len] != c && s[word_len] != '\0')
		word_len++;
	word = (char *) malloc((word_len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (i < word_len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**ft_alloc(char *s, char **arr, int j, char c)
{
	arr[j] = ft_word(s, c);
	if (arr[j] == NULL)
	{
		while (j > 0)
		{
			free(arr[j - 1]);
			j--;
		}
		free (arr);
		return (NULL);
	}
	return (arr);
}

static char	*ft_do_work(char *s, char **arr, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			if (ft_alloc((char *)&s[i], arr, j, c) == NULL)
				return (NULL);
			j++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	arr[j] = NULL;
	return ((char *) arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		count;

	if (s == NULL)
		return (NULL);
	count = ft_wordcount((char *)s, c);
	arr = (char **)malloc((count + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	if (ft_do_work((char *)s, arr, c) == NULL)
		return (NULL);
	return (arr);
}
