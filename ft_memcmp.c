/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:17:14 by paulo             #+#    #+#             */
/*   Updated: 2024/11/05 11:42:18 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while ((ptr1 || ptr2) && i < n)
	{
		if (ptr1[i] != ptr2[i])
			return ((ptr1[i] - ptr2[i]));
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	str1[15] = "Paulo Henrique";
	char	str2[15] = "Paulo Henrique";

	printf("%d\n", ft_memcmp(str1, str2, 15));
}

*/