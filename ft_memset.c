/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:16:44 by paulo             #+#    #+#             */
/*   Updated: 2024/11/19 09:10:16 by paulo            ###   ########.fr       */
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
	int		num_v[5];
	int		i;

	num_v[0] = 1;
	num_v[1] = 2;
	num_v[2] = 3;
	num_v[3] = 4;
	num_v[4] = 5;
	ft_memset(num_v, 11, 4);
	i = 0;
	while (i < 5)
	{
		printf("%d, ", num_v[i]);
		i++;
	}
	printf("\n");
	num_v[0] = 1;
	num_v[1] = 2;
	num_v[2] = 3;
	num_v[3] = 4;
	num_v[4] = 5;
	memset(num_v, 11, 4 * 3);
	i = 0;
	while (i < 5)
	{
		printf("%d, ", num_v[i]);
		i++;
	}
}

*/