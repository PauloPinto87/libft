/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:03:02 by paulo             #+#    #+#             */
/*   Updated: 2024/11/07 16:03:02 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	int				rev_fact;

	if (n == 0 || dest == src)
		return (dest);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	rev_fact = 1;
	if (dest_ptr > src_ptr)
	{
		dest_ptr += n - 1;
		src_ptr += n - 1;
		rev_fact = -1;
	}
	while (n > 0)
	{
		*dest_ptr = *src_ptr;
		dest_ptr += rev_fact;
		src_ptr += rev_fact;
		n --;
	}
	return (dest);
}

/*
int	main(void)
{
	char str1[] = "Paulo Henrique";
	char str2[15];

	memmove(str2, str1, 15);
	printf("str1, ft_memmove()  %s\n", str1);
	printf("str2, ft_memmove()  %s\n", str2);

	memmove(str1 + 3, str1, 15);
	printf("str1, ft_memmove() sobreposicao  %s\n", str1);

	printf("str1, ft_memmove to str2 NULOS = %p\n",  ft_memmove(NULL, NULL, 15));
}

*/