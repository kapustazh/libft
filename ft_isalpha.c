/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnestere <mnestere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 10:04:34 by atvii             #+#    #+#             */
/*   Updated: 2025/10/10 13:31:18 by mnestere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	return ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'));
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	while (i <= 47)
// 	{
// 		printf("%i ", ft_isalpha(i));
// 		i++;
// 	}
// }
