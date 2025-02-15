/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:27:14 by cammatos          #+#    #+#             */
/*   Updated: 2025/02/15 15:51:12 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	int	len;
	char	*copy;
	int	i;

	len = ft_strlen(src);
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int	main(void)
{
	char	original[] = "42 Adelaide Piscine";
	char	*duplicate = ft_strdup(original);

	if (duplicate == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Original: %s\n", original);
	printf("Duplicate: %s\n", duplicate);
	free(duplicate);
	return (0);
}

