/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atvii <atvii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 22:40:46 by atvii             #+#    #+#             */
/*   Updated: 2025/09/04 23:00:16 by atvii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*temp;
	size_t	i;

	i = 0;
	temp = ft_strdup(s);
	if (!temp)
		return (NULL);
	while (temp[i])
	{
		temp[i] = f(i, temp[i]);
		i++;
	}
	return (temp);
}
