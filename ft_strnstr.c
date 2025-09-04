/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atvii <atvii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:14:32 by atvii             #+#    #+#             */
/*   Updated: 2025/09/04 15:36:51 by atvii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystick, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystick);
	i = 0;
	while (haystick[i] && i < len)
	{
		j = 0;
		while (needle[j] && i + j < len && haystick[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)haystick + i);
		i++;
	}
	return ('\0');
}
