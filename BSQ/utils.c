/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <cammatos@student.42adel.org.au>  +#+  +:+       +#+        */
/*       rtahmid  <rtahmid@student.42adel.org.au> +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:11:34 by cammatos          #+#    #+#             */
/*   Updated: 2025/02/09 14:44:30 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// Prints a single character
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Prints a string
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int	ft_min(int a, int b, int c)
{
	if (a < b && a < c)
		return (a);
	if (b < c)
		return (b);
	return (c);
}
