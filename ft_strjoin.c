/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenri2 <pahenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:08:01 by paulo             #+#    #+#             */
/*   Updated: 2024/12/05 14:01:22 by pahenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_str;
	size_t	total_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
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
 	char *s2 = NULL;
 	char *s3 = "the nyancat";
 	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
 
 	printf("res = %s\n", res);

}

*/