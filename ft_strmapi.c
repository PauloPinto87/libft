/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenri2 <pahenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 08:41:42 by paulo             #+#    #+#             */
/*   Updated: 2024/12/05 14:47:34 by pahenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
/*
static char	tolower_callback(unsigned int index, char c)
{
	(void)index;
	return ((char)tolower((unsigned char)c));
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*result;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int main(void) {
	char *original = NULL;
	char *result;


	result = ft_strmapi(original, tolower_callback);

	if (result) {
		printf("String original: %s\n", original);
		printf("String transformada: %s\n", result);
		free(result);
	} else {
		printf("Erro\n");
	}

	return 0;
}
*/