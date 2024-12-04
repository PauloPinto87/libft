/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:01:24 by paulo             #+#    #+#             */
/*   Updated: 2024/11/17 14:49:47 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static size_t	str_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = str_len(dst);
	src_len = str_len(src);
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (src[i] && (dst_len + i) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*
int	main(void)
{
	char	str_src[] = " Henrique";
	char	str_dst[15] = "Paulo";

	printf("str_len(str_src) = %ld\n", str_len(str_src));
	printf("str_len(str_dst) = %ld\n", str_len(str_dst));

	printf("ft_strlcat() return = %ld\n", ft_strlcat(str_dst, str_src, 14));
	printf("str_dst = %s\n", str_dst);

	printf("str_len(str_src) = %ld\n", str_len(str_src));
	printf("str_len(str_dst) = %ld\n", str_len(str_dst));
}

*/