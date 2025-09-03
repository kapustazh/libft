/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atvii <atvii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 00:38:46 by atvii             #+#    #+#             */
/*   Updated: 2025/09/03 01:17:42 by atvii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t num)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*src;

	if (num == 0 || to == from)
		return (to);
	dest = (unsigned char *)to;
	src = (const unsigned char *)from;
	if (dest < src)
	{
		i = 0;
		while (i < num)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		i = num;
		while (i--)
			dest[i] = src[i];
	}
	return (to);
}
