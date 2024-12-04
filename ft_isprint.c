/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:26:03 by paulo             #+#    #+#             */
/*   Updated: 2024/11/18 14:43:26 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int i;

    i = 0;
    while (i <= 127)
    {
        printf("c = %c, d = %d ft_isprint() = %d\n", i, i, ft_isprint(i));
        i++;
    }
	printf("\n");
}

*/