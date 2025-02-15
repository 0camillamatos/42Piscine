/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <cammatos@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:05:24 by cammatos          #+#    #+#             */
/*   Updated: 2025/01/28 19:15:46 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	div_result;
	int	mod_result;

	x = 10;
	y = 3;
	ft_div_mod(x, y, &div_result, &mod_result);
	printf("Division: %d\n", div_result);
	printf("Modulus: %d\n", mod_result);
	return (0);
}*/
