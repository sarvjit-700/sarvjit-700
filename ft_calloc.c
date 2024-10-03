/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:23:13 by marvin            #+#    #+#             */
/*   Updated: 2024/10/02 16:23:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t	i;
	size_t	max_size;

	max_size = (size_t) - 1;
	if (count != 0 && size > max_size / count)
		return (NULL);
	i = 0;
	tmp = malloc(count * size);
	if (tmp == NULL)
		return (NULL);
	while (i < (count * size))
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
