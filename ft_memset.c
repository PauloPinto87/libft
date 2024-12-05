/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenri2 <pahenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:16:44 by paulo             #+#    #+#             */
/*   Updated: 2024/12/05 12:16:25 by pahenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char	str1[15] = "Paulo Henrique";
	char	str2[15] = "Paulo Henrique";

	printf("before memset %s \n", str1);
	memset(str1, 'P', 12);
	printf("after memset %s \n", str1);

	printf("before memeset %s \n", str2);
	ft_memset(str2, 80, 12);
	printf("after ft_memset %s \n", str2);
}

*/