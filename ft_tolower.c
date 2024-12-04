/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenri2 <pahenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:41:03 by paulo             #+#    #+#             */
/*   Updated: 2024/12/04 10:54:00 by pahenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("ft_tolower() with alphabetic, return = %c\n", ft_tolower(c));
	printf("tolower() with alphabetic, return = %c\n", tolower(c));
	c = 'A';
	printf("\nft_tolower() with alphabetic upper, return = %c\n", ft_tolower(c));
	printf("tolower() with alphabetic upper, return = %c\n", tolower(c));
	c = '/';
	printf("\nft_tolower() with simbol, return = %c\n", ft_tolower(c));
	printf("tolower() with simbol, return = %c\n", tolower(c));
	c = '5';
	printf("\nft_tolower() with num, return = %c\n", ft_tolower(c));
	printf("tolower() with num, return = %c\n", tolower(c));
}

*/