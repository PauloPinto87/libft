/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenri2 <pahenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:29:32 by paulo             #+#    #+#             */
/*   Updated: 2024/12/04 17:10:11 by pahenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*vet;
	size_t			i;

	if (nmemb != 0 && size > __SIZE_MAX__ / nmemb)
		return (NULL);
	vet = malloc(nmemb * size);
	if (!vet)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (vet);
	i = 0;
	while (i < nmemb * size)
	{
		vet[i] = 0;
		i++;
	}
	return (vet);
}

/*
int	main(void)
{
	int	i;
	int *vet1;
	int	*vet2;

	vet1 = ft_calloc(10, sizeof(int));
	vet2 = calloc(10, sizeof(int));
	i = 0;
	while (i < 10)
	{
		printf("vet1[%d] = %d\n", i, vet1[i]);
		i++;
	}
	i = 0;
	while (i < 10)
	{
		printf("vet2[%d] = %d\n", i, vet2[i]);
		i++;
	}
}
*/