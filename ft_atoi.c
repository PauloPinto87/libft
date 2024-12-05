/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahenri2 <pahenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:20:09 by paulo             #+#    #+#             */
/*   Updated: 2024/12/05 13:35:44 by pahenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static const char	*extract_int(const char *nptr, int *result)
{
	while (*nptr >= '0' && *nptr <= '9')
	{
		*result *= 10;
		*result += *nptr - 48;
		nptr++;
	}
	return (nptr);
}

int	ft_atoi(const char *nptr)
{
	int	result;
	int	signal_factor;

	result = 0;
	signal_factor = 1;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-')
	{
		signal_factor = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	nptr = extract_int(nptr, &result);
	return (result * signal_factor);
}

/*
int	main(void)
{
	char	nptr[] = " \t\v\n\r\f123";
	char	*nptr_null = NULL;
	int		x;

	x = atoi(nptr);
	printf("x = atoi(nptr), return =  %d\n", x);
	x = ft_atoi(nptr);
	printf("x = ft_atoi(nptr) / %d\n", x);
	x = atoi(nptr_null);
	printf("x  = atoi(nptr_null) / %d\n", x);
	x = ft_atoi(nptr_null);
	printf("x  = ft_atoi(nptr_null) / %d\n", x);

	char *str = NULL; // Cria um ponteiro nulo
	int num = atoi(str);
    if (str == NULL) {
        printf("O ponteiro é nulo.\n");
    } else {
        printf("O ponteiro não é nulo.\n");
    }
		printf("O retorno = %d.\n", num);
}

*/