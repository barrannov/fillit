/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:31:26 by mponomar          #+#    #+#             */
/*   Updated: 2017/01/20 21:31:34 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**fill(t_block block, char **map, char c, int amount)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		map[block.y[i]][block.x[i]] = c;
		i++;
	}
	if (amount == 1)
		print_map(map);
	return (map);
}
