/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:13:59 by paulo             #+#    #+#             */
/*   Updated: 2024/11/16 18:41:06 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	u_num;

	u_num = 127;
	printf("Call ft_isascii() with ascii, return = %d\n", ft_isascii(u_num));
	printf("Call isascii() with ascii, return = %d\n", isascii(u_num));
	u_num = 128;
	printf("ft_isascii() with non ascii, return = %d\n", ft_isascii(u_num));
	printf("Call isascii() with non ascii, return = %d\n", isascii(u_num));
	u_num = -1;
	printf("ft_isascii() with negative num, return = %d\n", ft_isascii(u_num));
	printf("Call isascii() with negative num, return = %d\n", isascii(u_num));
	return (0);
}

*/