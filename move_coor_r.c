/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_core_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:07:18 by mponomar          #+#    #+#             */
/*   Updated: 2017/01/19 19:13:28 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_block		move_coor_r(char **map, t_block block)
{
	int		coor;
	t_block	null;
	int		count;

	null.x[0] = 0;
	coor = 0;
	count = 1;
	while (coor < 4)
	{
		block.x[coor] += count;
		coor++;
	}
	if (!check_min(block, map))
	{
		null = move_coor_rad(map, block);
		if (null.x[0] == -5)
			return (null);
		else
			block = null;
	}
	return (block);
}
