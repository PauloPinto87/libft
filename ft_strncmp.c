/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:05:41 by paulo             #+#    #+#             */
/*   Updated: 2024/11/19 09:16:51 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*un_s1;
	unsigned char	*un_s2;

	un_s1 = (unsigned char *)s1;
	un_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0 || (!*un_s1 && !*un_s2))
		return (0);
	while (i < n && un_s1[i] == un_s2[i] && un_s1[i] && un_s2[i])
		i++;
	if (i == n)
		return (0);
	return (un_s1[i] - un_s2[i]);
}

/*
int	main(void)
{
	char *big = "\200";
 	char *little = "\0";
 	size_t size = 6;

	printf("(strncmp(big, little, size) = %d\n", \
	strncmp(big, little, size));
	printf("(ft_strncmp(big, little, size) = %d\n", \
	ft_strncmp(big, little, size));
}

*/