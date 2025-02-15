/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:44:13 by cammatos          #+#    #+#             */
/*   Updated: 2025/02/11 18:19:15 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

int	main(void)
{
	printf("Fibonacci(0) = %d\n", ft_fibonacci(0));
	printf("Fibonacci(-14) = %d\n", ft_fibonacci(-14));
	printf("Fibonacci(2) = %d\n", ft_fibonacci(2));
	printf("Fibonacci(3) = %d\n", ft_fibonacci(3));
	printf("Fibonacci(4) = %d\n", ft_fibonacci(4));
}
