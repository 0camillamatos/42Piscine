/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:14:44 by cammatos          #+#    #+#             */
/*   Updated: 2025/02/10 17:50:33 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	index;
	int	result;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	index = nb;
	result = index;
	while (index > 1)
	{
		result = result * (index -1);
		index--;
	}
	return (result);
}
/*
int	main(void)
{
	int	num = 5;
	int	res = ft_iterative_factorial(num);
	printf("Result: %d\n", res);
	num = 6;
	res = ft_iterative_factorial(num);
	printf("Result: %d\n", res);
	return (0);
}*/
