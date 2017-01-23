/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 21:58:45 by mponomar          #+#    #+#             */
/*   Updated: 2017/01/20 20:02:32 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_block	ft_charrange(t_block block)
{
	int i;
	int xy;
	int t;
	int y;

	t = 0;
	xy = 0;
	i = 0;
	y = 0;
	while (xy < 4)
	{
		if (block.x[xy] < 0)
		{
			t = block.x[xy] * -1;
			while (y < 4)
			{
				block.x[y] += t;
				y++;
			}
			y = 0;
			break ;
		}
		xy++;
	}
	return (block);
}

t_block			ft_arrange(t_block block)
{
	int			x;
	int			y;
	int			i;

	i = 1;
	x = block.x[0];
	y = block.y[0];
	block.x[0] = 0;
	block.y[0] = 0;
	while (i < 4)
	{
		block.x[i] = block.x[i] - x;
		block.y[i] = block.y[i] - y;
		i++;
	}
	block = ft_charrange(block);
	if (block.move[0] == -1)
		block = move_l(block);
	return (block);
}
