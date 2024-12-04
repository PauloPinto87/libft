/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:58:42 by paulo             #+#    #+#             */
/*   Updated: 2024/11/19 09:17:35 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char			*last_c;
	unsigned char	un_c;

	un_c = (unsigned char)c;
	last_c = NULL;
	while (*s != '\0')
	{
		if ((unsigned char)*s == un_c)
			last_c = (char *)s;
		s++;
	}
	if (un_c == '\0')
		return ((char *)s);
	return ((char *)last_c);
}

/*
int	main(void)
{
	char	*str;
	char	c;

	str = "Este elefante gosta de banane";
	c = 'e';
	printf("ft_strrchr(%s, %c) = %s\n", str, c, ft_strrchr(str, c));
	printf("strrchr(%s, %c) = %s\n", str, c, strrchr(str, c));
	c = 'a';
	printf("\nft_strrchr(%s, %c) = %s\n", str, c, ft_strrchr(str, c));
	printf("strrchr(%s, %c) = %s\n", str, c, strrchr(str, c));
}

*/