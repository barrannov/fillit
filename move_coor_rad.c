/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_coor_rad.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:26:02 by mponomar          #+#    #+#             */
/*   Updated: 2017/01/19 16:28:14 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_block		move_coor_rad(char **map, t_block block)
{
	int		coor;
	t_block	null;
	int		x;

	x = block.x[0];
	block.x[0] = 0;
	null.x[0] = -5;
	coor = 0;
	while (coor < 4)
	{
		block.y[coor] = block.y[coor] + 1;
		coor++;
	}
	coor = 1;
	while (coor < 4)
	{
		block.x[coor] = block.x[coor] - x;
		block.x[coor] = block.x[coor];
		coor++;
	}
	block = ft_charrange2(block);
	if (!check_min(block, map))
		return (null);
	return (block);
}
