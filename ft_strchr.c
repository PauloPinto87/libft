/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:04:36 by paulo             #+#    #+#             */
/*   Updated: 2024/11/19 09:10:47 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	un_char;

	un_char = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == un_char)
			return ((char *)s);
		s++;
	}
	if (un_char == '\0')
		return ((char *)s);
	return (0);
}

/*q
int	main(void)
{
	char	*str;
	char	c;

	str = "Paulo Henrique";
	c = '\0';
	printf("ft_strchr(%s, %c) = %p\n", str, c, ft_strchr(str, c));
	printf("strchr(%s, %c) = %p\n", str, c, strchr(str, c));
	c = 'H';
	printf("\nft_strchr(%s, %c) = %s\n", str, c, ft_strchr(str, c));
	printf("strchr(%s, %c) = %s\n", str, c, strchr(str, c));
}

*/