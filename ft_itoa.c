/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:28:27 by paulo             #+#    #+#             */
/*   Updated: 2024/11/29 12:21:00 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static size_t	count_digits(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int c)
{
	size_t		is_negative;
	int			len;
	char		*str_converted;
	long int	c_long;

	c_long = (long int)c;
	is_negative = 0;
	if (c_long < 0)
	{
		is_negative = 1;
		c_long = -c_long;
	}
	len = count_digits(c_long) + is_negative;
	str_converted = malloc((len + 1) * sizeof(char));
	if (!str_converted)
		return (NULL);
	if (is_negative)
		str_converted[0] = '-';
	str_converted[len--] = '\0';
	while ((is_negative == 1 && len > 0) || (is_negative == 0 && len >= 0))
	{
		str_converted[len--] = (c_long % 10) + '0';
		c_long = c_long / 10;
	}
	return (str_converted);
}
/*
int	main(void)
{
	int		number;
	char	*result_converted;

	number = 9;
	result_converted = ft_itoa(number);
	printf("NUM = %d, result_converted = %s\n", number, result_converted);

	number = 19;
	result_converted = ft_itoa(number);
	printf("NUM = %d, result_converted = %s\n", number, result_converted);

	number = 0;
	result_converted = ft_itoa(number);
	printf("NUM = %d, result_converted = %s\n", number, result_converted);

	number = -9;
	result_converted = ft_itoa(number);
	printf("NUM = %d, result_converted = %s\n", number, result_converted);

	number = -19;
	result_converted = ft_itoa(number);
	printf("NUM = %d, result_converted = %s\n", number, result_converted);
}

*/