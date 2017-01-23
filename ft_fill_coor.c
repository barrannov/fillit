/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_coor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 22:00:07 by mponomar          #+#    #+#             */
/*   Updated: 2017/01/20 17:11:05 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_block	*check_in(t_block *block, int amount_block)
{
	int			t;

	t = 0;
	while (t < amount_block)
	{
		block[t] = ft_arrange(block[t]);
		t++;
	}
	return (block);
}

static t_block	*block_fix(char *str, int amount_block, t_block *block, int kol)
{
	int		t;
	int		xy;
	int		p;

	t = 0;
	xy = 0;
	p = 0;
	while (kol < amount_block)
	{
		while (t <= 20)
		{
			if (str[p] == '#')
			{
				block[kol].y[xy] = t / 5;
				block[kol].x[xy] = t % 5;
				xy++;
			}
			p++;
			t++;
		}
		t = 0;
		xy = 0;
		kol++;
	}
	return (block);
}

t_block			*ft_fill_coor(char *str, int amount_block, t_block *block)
{
	int kol;

	kol = 0;
	block = (t_block *)malloc(sizeof(t_block) * amount_block);
	block_fix(str, amount_block, block, kol);
	return (check_in(block, amount_block));
}
