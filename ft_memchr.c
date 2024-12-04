/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:10:59 by paulo             #+#    #+#             */
/*   Updated: 2024/11/18 07:57:34 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	un_c;

	ptr = (unsigned char *)s;
	un_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (un_c == ptr[i])
			return (ptr + i);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	data[27];
	char	c;
	int		i;

	i = 0;
	while (i < 26)
	{
		data[i] = 65 + i;
		i++;
	}
	data[26] = '\0';
	printf("data = %s\n", data);
	c = 'B';
	printf("ft_memchr 'B' = %s\n", (char *)ft_memchr(data, c, 27));
	printf("memchr 'B' = %s\n", (char *)memchr(data, c, 27));
	c = 'H';
	printf("\nft_memchr 'H' = %s\n", (char *)ft_memchr(data, c, 27));
	printf("memchr 'H' = %s\n", (char *)memchr(data, c, 27));
	c = 'h';
	printf("\nft_memchr 'h' = %s\n", (char *)ft_memchr(data, c, 27));
	printf("memchr 'h' = %s\n", (char *)memchr(data, c, 27));
}

*/