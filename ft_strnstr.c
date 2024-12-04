/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:35:13 by paulo             #+#    #+#             */
/*   Updated: 2024/11/15 14:35:13 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (*little == '\0')
		return ((char *)(big));
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	big_str[15] = "Paulo Henrique";
	char	little_str[9] = "Henrique";

	//printf("strnstr()  = %s\n", strnstr(big_str, little_str, 15));
	printf("ft_strnstr() %s\n", ft_strnstr(big_str, little_str, 7));
}

*/