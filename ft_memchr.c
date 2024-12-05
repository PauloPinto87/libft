/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenri2 <pahenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:10:59 by paulo             #+#    #+#             */
/*   Updated: 2024/12/05 13:41:42 by pahenri2         ###   ########.fr       */
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

	char *str = NULL; // Cria um ponteiro nulo
	int *num = ft_memchr(str, 1, 1);
    if (str == NULL) {
        printf("O ponteiro é nulo.\n");
    } else {
        printf("O ponteiro não é nulo.\n");
    }
		printf("O retorno = %d.\n", num[0]);
}

*/