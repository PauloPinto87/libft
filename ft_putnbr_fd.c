/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:06:48 by paulo             #+#    #+#             */
/*   Updated: 2024/11/29 13:09:07 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

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

void	ft_putnbr_fd(int n, int fd)
{
	size_t		is_negative;
	int			len;
	long int	c_long;
	char		temp_buff[12];

	c_long = (long int)n;
	is_negative = 0;
	if (c_long < 0)
	{
		is_negative = 1;
		c_long = -c_long;
	}
	len = count_digits(c_long) + is_negative;
	if (is_negative)
		temp_buff[0] = '-';
	temp_buff[len--] = '\0';
	while ((is_negative == 1 && len > 0) || (is_negative == 0 && len >= 0))
	{
		temp_buff[len--] = (c_long % 10) + '0';
		c_long = c_long / 10;
	}
	write(fd, temp_buff, ft_strlen(temp_buff));
}
