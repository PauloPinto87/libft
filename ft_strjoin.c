/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:08:01 by paulo             #+#    #+#             */
/*   Updated: 2024/11/20 12:04:25 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_str;
	size_t	total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	final_str = malloc(total_len);
	if (!final_str)
		return (NULL);
	ft_strlcpy(final_str, s1, total_len);
	ft_strlcat(final_str, s2, total_len);
	return (final_str);
}
/*
int	main(void)
{
 	char *s1 = "my favorite animal is";
 	char *s2 = " ";
 	char *s3 = "the nyancat";
 	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
 
 	if (!strcmp(res, "my favorite animal is the nyancat"))
	{
		printf("correto - %s\n", res);
	}

	else
	{
		printf("ERRADO - %s\n", res);
	}


}

*/