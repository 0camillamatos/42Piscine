/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:09:55 by cammatos          #+#    #+#             */
/*   Updated: 2025/02/09 14:26:16 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define MAX_ROWS 100
# define MAX_COLS 100

// Struct
typedef struct s_bsq
{
	int	**dp;
	int	max_size;
	int	max_i;
	int	max_j;
}	t_bsq;

// Utils
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_min(int a, int b, int c);

// Map functions
int		open_file(char *filename);
void	skip_metadata(int fd);
void	read_map(int fd, char map[MAX_ROWS][MAX_COLS], int *rows);
void	print_map(char map[MAX_ROWS][MAX_COLS], int rows);

// BSQ Algorithm
void	find_biggest_square(char map[MAX_ROWS][MAX_COLS], int rows);
void	fill_square(char map[MAX_ROWS][MAX_COLS], int max_i,
			int max_j, int max_size);
int		**allocate_dp(int rows, int cols);
void	free_dp(int **dp, int rows);
void	check_update_max(int **dp, t_bsq *bsq, int i, int j);
void	update_dp(int **dp, char map[MAX_ROWS][MAX_COLS], int rows,
			t_bsq *bsq);

#endif
