/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammatos <cammatos@student.42adel.org.au>  +#+  +:+       +#+        */
/*       rtahmid  <rtahmid@student.42adel.org.au> +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:24:48 by cammatos          #+#    #+#             */
/*   Updated: 2025/02/09 14:38:10 by cammatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// Allocates memory for the DP table
int	**allocate_dp(int rows, int cols)
{
	int	**dp;
	int	i;

	dp = (int **)malloc(sizeof(int *) * rows);
	if (!dp)
		return (NULL);
	i = 0;
	while (i < rows)
	{
		dp[i] = (int *)malloc(sizeof(int) * cols);
		if (!dp[i])
			return (NULL);
		i++;
	}
	return (dp);
}

// Frees allocated DP table
void	free_dp(int **dp, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		free(dp[i]);
		i++;
	}
	free(dp);
}

// Fills the biggest square with 'x'
void	fill_square(char map[MAX_ROWS][MAX_COLS], int max_i,
			int max_j, int max_size)
{
	int	i;
	int	j;

	i = max_i - max_size + 1;
	while (i <= max_i)
	{
		j = max_j - max_size + 1;
		while (j <= max_j)
		{
			map[i][j] = 'x';
			j++;
		}
		i++;
	}
}
