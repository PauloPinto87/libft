/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:17:46 by paulo             #+#    #+#             */
/*   Updated: 2024/11/19 09:08:18 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;

	if (n == 0 || dest == src)
		return (dest);
	ptr_src = (unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[50] = "Paulo Henrique";
	char	dest[50] = "Texto anterior";

	printf("before ft_memcpy dest = %s\n", dest);
	printf("after ft_memcpy dest = %s\n", (char *)ft_memcpy(dest, src, 10));
}


*/