/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:52:08 by cammatos          #+#    #+#             */
/*   Updated: 2025/02/11 11:58:46 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	int	num = 5;
	int	res = ft_recursive_factorial(num);
	printf("Result: %d\n", res);
	num = 6;
	res = ft_recursive_factorial(num);
	printf("Result: %d\n", res);
	return (0);
}*/
