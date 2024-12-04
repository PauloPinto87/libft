/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:59:45 by paulo             #+#    #+#             */
/*   Updated: 2024/11/16 10:59:45 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/*
int main(void)
{
	char    src_str[] = "Paulo Henrique";
	char    dest_str[] = "";

	printf("dest_str after strlcpy() = %s\n", dest_str);
	printf("return strlcpy() = %ld\n", ft_strlcpy(dest_str, src_str, 15));
	printf("dest_str before strlcpy() = %s\n", dest_str);
}

*/