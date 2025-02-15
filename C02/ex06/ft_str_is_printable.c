/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <cammatos@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:16:56 by cammatos          #+#    #+#             */
/*   Updated: 2025/01/30 20:25:56 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 32 && *str <= 126)))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int	anything = ft_str_is_printable("Camilla");

	printf("%d", anything);
}*/
