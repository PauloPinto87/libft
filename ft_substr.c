/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:22:30 by paulo             #+#    #+#             */
/*   Updated: 2024/11/19 14:00:02 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;
	unsigned int	i;
	unsigned int	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	sub_str = malloc(len + 1);
	if (sub_str)
	{
		i = 0;
		while (i < len)
		{
			sub_str[i] = s[start + i];
			i++;
		}
		sub_str[i] = '\0';
		return (sub_str);
	}
	else
		return (NULL);
}
/*
int	main(void)
{
	char	str1[] = "01234";
	size_t	size = 10;
	char	*ret;

	ret = ft_substr(str1, 5, size);
	printf("ft_substr() = %s\n", ret);
}

*/