/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:35:12 by cammatos          #+#    #+#             */
/*   Updated: 2025/02/11 17:10:56 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("ft_sqrt(1) = %d\n", ft_sqrt(1));
	printf("ft_sqrt(4) = %d\n", ft_sqrt(4));
	printf("ft_sqrt(9) = %d\n", ft_sqrt(9));
	printf("ft_sqrt(10) = %d\n", ft_sqrt(10));
}*/
