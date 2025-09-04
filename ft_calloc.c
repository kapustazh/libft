/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atvii <atvii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:31:22 by atvii             #+#    #+#             */
/*   Updated: 2025/09/04 17:04:22 by atvii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	bzero(void *ptr, size_t num)
{
	size_t			i;
	unsigned char	*dest;

	dest = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		dest[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	bzero(ptr, num * size);
	return (ptr);
}
