/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <cammatos@student.42adel.org.au>  +#+  +:+       +#+        */
/*       rtahmid  <rtahmid@student.42adel.org.au> +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:11:05 by cammatos          #+#    #+#             */
/*   Updated: 2025/02/09 14:43:33 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// Main function to handle program execution
int	main(int argc, char **argv)
{
	char	map[MAX_ROWS][MAX_COLS];
	int		rows;
	int		fd;

	if (argc != 2)
	{
		ft_putstr("Usage: ./read_map <example_file>\n");
		return (1);
	}
	fd = open_file(argv[1]);
	if (fd == -1)
		return (1);
	skip_metadata(fd);
	read_map(fd, map, &rows);
	close(fd);
	ft_putstr("Original Map:\n");
	print_map(map, rows);
	find_biggest_square(map, rows);
	ft_putstr("\nFinal Map with Largest Square:\n");
	print_map(map, rows);
	return (0);
}
