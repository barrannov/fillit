/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_min.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:04:38 by mponomar          #+#    #+#             */
/*   Updated: 2017/01/19 16:10:43 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			check_min(t_block block, char **map)
{
	int		size;
	int		i;

	i = 0;
	if (block.move[0] == -1)
		block = move_l(block);
	size = size_map(map);
	while (i < 4)
	{
		if (block.x[i] >= size || block.y[i] >= size)
			return (0);
		i++;
	}
	return (1);
}
