/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnestere <mnestere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:47:31 by mnestere          #+#    #+#             */
/*   Updated: 2025/10/07 15:47:33 by mnestere         ###   ########.fr       */
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
	return (NULL);
}
