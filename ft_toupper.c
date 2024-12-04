/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenri2 <pahenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:41:03 by paulo             #+#    #+#             */
/*   Updated: 2024/12/04 10:53:44 by pahenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("ft_toupper() with alphabetic, return = %c\n", ft_toupper(c));
	printf("toupper() with alphabetic, return = %c\n", toupper(c));
	c = 'A';
	printf("\nft_toupper() with alphabetic upper, return = %c\n", ft_toupper(c));
	printf("toupper() with alphabetic upper, return = %c\n", toupper(c));
	c = '/';
	printf("\nft_toupper() with simbol, return = %c\n", ft_toupper(c));
	printf("toupper() with simbol, return = %c\n", toupper(c));
	c = '5';
	printf("\nft_toupper() with num, return = %c\n", ft_toupper(c));
	printf("toupper() with num, return = %c\n", toupper(c));
}

*/