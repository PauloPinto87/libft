/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:56:59 by paulo             #+#    #+#             */
/*   Updated: 2024/11/28 11:13:02 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	char i;
    i = 'a';
    while (i <= 'z')
    {
        printf("c = %c, d = %d ft_isalpha() = %d\n", i, i, ft_isalpha(i));
        i++;
    }
	printf("\n");
}

*/