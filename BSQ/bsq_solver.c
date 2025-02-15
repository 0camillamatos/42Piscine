/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_solver.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <cammatos@student.42adel.org.au>  +#+  +:+       +#+        */
/*       rtahmid  <rtahmid@student.42adel.org.au> +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:30:54 by cammatos          #+#    #+#             */
/*   Updated: 2025/02/09 14:36:21 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	check_update_max(int **dp, t_bsq *bsq, int i, int j)
{
	if (dp[i][j] > bsq->max_size)
	{
		bsq->max_size = dp[i][j];
		bsq->max_i = i;
		bsq->max_j = j;
	}
}

void	process_dp_cell(int **dp, char map[MAX_ROWS][MAX_COLS], int i, int j)
{
	if (map[i][j] == 'o')
		dp[i][j] = 0;
	else if (i == 0 || j == 0)
		dp[i][j] = 1;
	else
		dp[i][j] = 1 + ft_min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]);
}

void	update_dp(int **dp, char map[MAX_ROWS][MAX_COLS], int rows, t_bsq *bsq)
{
	int	i;
	int	j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (map[i][j])
		{
			process_dp_cell(dp, map, i, j);
			check_update_max(dp, bsq, i, j);
			j++;
		}
		i++;
	}
}

void	find_biggest_square(char map[MAX_ROWS][MAX_COLS], int rows)
{
	t_bsq	bsq;

	bsq.dp = allocate_dp(rows, MAX_COLS);
	if (!bsq.dp)
		return ;
	bsq.max_size = 0;
	bsq.max_i = 0;
	bsq.max_j = 0;
	update_dp(bsq.dp, map, rows, &bsq);
	fill_square(map, bsq.max_i, bsq.max_j, bsq.max_size);
	free_dp(bsq.dp, rows);
}
