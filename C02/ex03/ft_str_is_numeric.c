/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <cammatos@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:34:24 by cammatos          #+#    #+#             */
/*   Updated: 2025/01/30 19:11:48 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= '0' && *str <= '9')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main()
{
	int	anything = ft_str_is_numeric("1234");
	printf("%d", anything);
}*/
