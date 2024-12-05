/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenri2 <pahenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:40:47 by paulo             #+#    #+#             */
/*   Updated: 2024/12/05 13:37:34 by pahenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*
int	main(void)
{
	char	str[5];
	int		i;

	i = 0;
	while (i < 5)
	{
		str[i] = i + 1;
		printf("%d, ", str[i]);
		i++;
	}
	printf("\n");
	printf("before bzero() in str[0]= %d\n", str[0]);
	bzero(str, 1);
	printf("after bzero() in str[0] = %d\n", str[0]);
	printf("before bzero() in str[1]= %d\n", str[1]);
	ft_bzero(str, 10);
	printf("after bzero() in str[1] = %d\n", str[1]);

	i = 0;
	while (i < 5)
	{
		printf("%d, ", str[i]);
		i++;
	}
}

*/