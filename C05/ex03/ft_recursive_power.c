/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:25:40 by cammatos          #+#    #+#             */
/*   Updated: 2025/02/11 14:42:59 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}
/*
int	main(void)
{
	printf("5^5 = %d\n", ft_recursive_power(5, 5));	
	printf("2^-2 = %d\n", ft_recursive_power(2, -2));
	printf("0^0 = %d\n", ft_recursive_power(0, 0));
	return (0);
}*/
