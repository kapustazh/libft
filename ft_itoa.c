/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atvii <atvii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 22:08:01 by atvii             #+#    #+#             */
/*   Updated: 2025/09/04 22:38:25 by atvii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_checker(long num)
{
	int	count;

	count = 0;
	if (num <= 0)
		count = 1;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*fill_digits(char *digit, long num)
{
	int	len;
	int	i;

	len = size_checker(num);
	i = len - 1;
	digit[len] = '\0';
	if (num == 0)
	{
		digit[0] = '0';
		return (digit);
	}
	if (num < 0)
	{
		digit[0] = '-';
		num = -num;
	}
	digit[len] = '\0';
	while (num > 0)
	{
		digit[i] = num % 10 + '0';
		num /= 10;
		i--;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*str;

	num = n;
	str = (char *)malloc(size_checker(num) + 1);
	if (!str)
		return (NULL);
	return (fill_digits(str, num));
}
