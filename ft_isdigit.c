/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo <paulo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:15:57 by paulo             #+#    #+#             */
/*   Updated: 2024/11/28 10:46:07 by paulo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
int main()
{
	char	c;

	c = '9';
	printf("The return call ft_isdigit with digit = %d\n", ft_isdigit(c));
	printf("The return when we call isdigit() with a digit = %d\n", isdigit(c));
	c = 'a';
	printf("The return call ft_isdigit() with non digit = %d\n", ft_isdigit(c));
	printf("Return when we call isdigit() with a non digit = %d\n", isdigit(c));
	return (0);
}
*/