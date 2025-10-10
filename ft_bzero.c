/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnestere <mnestere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 23:58:02 by atvii             #+#    #+#             */
/*   Updated: 2025/10/07 15:22:38 by mnestere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *ptr, size_t num)
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

// int	main(void)
// {
// 	char	str[50];

// 	strcpy(str, "Hallo guys, how are you?");
// 	puts(str);
// 	ft_bzero(str, 7);
// 	puts(str);
// 	return (0);
// }
