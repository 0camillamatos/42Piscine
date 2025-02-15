/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:40:32 by cammatos          #+#    #+#             */
/*   Updated: 2025/02/11 12:04:00 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("2^3 = %d\n", ft_iterative_power(2, 3));
	printf("5^5 = %d\n", ft_iterative_power(5, 5));
	printf("0^0 = %d\n", ft_iterative_power(0, 0));
	printf("1^-10 = %d\n", ft_iterative_power(1, -10));
	return (0);
}*/
