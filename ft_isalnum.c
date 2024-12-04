/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:42:49 by paulo             #+#    #+#             */
/*   Updated: 2024/11/15 15:03:01 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z' )
		|| (c >= 'a' && c <= 'z' )
		|| (c >= '0' && c <= '9' ))
		return (8);
	else
		return (0);
}

/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("Call ft_isalnum() with alpha, return = %d\n", ft_isalnum(c));
	printf("Call isalnum() with alpha, return = %d\n", isalnum(c));
	c = '4';
	printf("Call ft_isalnum() with num, return = %d\n", ft_isalnum(c));
	printf("Call isalnum() with num, return = %d\n", isalnum(c));
	c = '*';
	printf("Call ft_isalnum() with non alphanum, return = %d\n", ft_isalnum(c));
	printf("Call isalnum() with non alphanum, return = %d\n", isalnum(c));
}

*/