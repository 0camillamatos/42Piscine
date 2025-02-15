/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <cammatos@student.42adel.org.au>  +#+  +:+       +#+        */
/*       rtahmid  <rtahmid@student.42adel.org.au> +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:12:19 by cammatos          #+#    #+#             */
/*   Updated: 2025/02/09 14:42:17 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// Opens the file and returns file descriptor
int	open_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		ft_putstr("Error opening file\n");
	return (fd);
}

// Skips the first line (metadata) of the file
void	skip_metadata(int fd)
{
	char	c;

	while (read(fd, &c, 1) && c != '\n')
		;
}

// Reads the map file and stores it in a 2D array
void	read_map(int fd, char map[MAX_ROWS][MAX_COLS], int *rows)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			map[i][j] = '\0';
			i++;
			j = 0;
		}
		else
		{
			map[i][j] = c;
			j++;
		}
	}
	*rows = i;
}

// Prints the stored map
void	print_map(char map[MAX_ROWS][MAX_COLS], int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
		i++;
	}
}
