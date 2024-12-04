/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:56:00 by paulo             #+#    #+#             */
/*   Updated: 2024/11/19 09:11:13 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t	str_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*vet;
	int		i;

	vet = malloc(str_len(s) + 1);
	if (!vet)
		return (NULL);
	i = 0;
	while (s[i])
	{
		vet[i] = s[i];
		i++;
	}
	vet[i] = '\0';
	return (vet);
}

/*
int	main(void)
{
	char	*str1 = "Paulo Henrique";
	char	*str2 = ft_strdup(str1);

	printf("%s\n", str2);
	printf("sizeof(str1) = %ld\n", sizeof(str1));
	return (0);
}

*/