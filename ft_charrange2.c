/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charrange2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:42:16 by mponomar          #+#    #+#             */
/*   Updated: 2017/01/19 16:59:08 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_block		ft_charrange2(t_block block)
{
	int		xy;
	int		t;
	int		y;

	xy = 0;
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
			break ;
		}
		xy++;
	}
	return (block);
}
