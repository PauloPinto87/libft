/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenri2 <pahenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:41:53 by paulo             #+#    #+#             */
/*   Updated: 2024/12/04 12:19:32 by pahenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && start < end)
		start++;
	if (start < end)
	{
		while (ft_strchr(set, s1[end - 1]) && end > start)
			end--;
	}
	str_trim = malloc(end - start + 1);
	if (!str_trim)
		return (NULL);
	ft_strlcpy(str_trim, &s1[start], end - start + 1);
	str_trim[end - start] = '\0';
	return (str_trim);
}
/*
int	main(void)
{
 	char *s1 = "-+- Pablo +-+";
 	char *ret = ft_strtrim(s1, "+-");

 	printf("%s\n", ret);
}

*/