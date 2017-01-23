/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_one.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:46:21 by mponomar          #+#    #+#             */
/*   Updated: 2017/01/19 19:12:43 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_block		move_one(char **map, t_block block)
{
	int		i;
	t_block	null;

	null.x[0] = -5;
	i = 0;
	if (!check_min(block, map))
		return (null);
	while (i < 4)
	{
		if (map[block.y[i]][block.x[i]] != '.')
		{
			null = move_coor_r(map, block);
			if (null.x[0] == -5)
				return (null);
			else
				block = null;
			return (move_one(map, block));
		}
		i++;
	}
	return (block);
}
