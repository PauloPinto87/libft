/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenri2 <pahenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:46:41 by paulo             #+#    #+#             */
/*   Updated: 2024/12/04 17:01:00 by pahenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "Paulo";
	str2 = "123456789";
	str3 = NULL;
	printf("ft_strlen(%s), return = %ld\n", str1, ft_strlen(str1));
	printf("strlen(%s), return = %ld\n", str1, strlen(str1));
	printf("\nft_strlen(%s), return = %ld\n", str2, ft_strlen(str2));
	printf("strlen(%s), return = %ld\n", str2, strlen(str2));
	printf("\nft_strlen(%s), return = %ld\n", str3, ft_strlen(str3));
	printf("strlen(%s), return = %ld\n", str3, strlen(str3));
}

*/