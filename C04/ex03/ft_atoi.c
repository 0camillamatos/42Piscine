/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:09:23 by cammatos          #+#    #+#             */
/*   Updated: 2025/02/06 13:45:50 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	soma;
	int	sinal;

	i = 0;
	soma = 0;
	sinal = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		soma = (soma * 10) + (str[i] - '0');
		i++;
	}
	return (sinal * soma);
}
/*
int	main()
{
	char	str[] = "-342hola";
	int	num = ft_atoi(str);
	printf("%d", num);
}*/
