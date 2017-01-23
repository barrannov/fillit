/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 19:18:43 by mponomar          #+#    #+#             */
/*   Updated: 2017/01/20 21:29:55 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_var	firs_f(t_var all)
{
	all.map = ft_create_map(all.size + 1);
	all.var = 0;
	all.c = 'A';
	all.block = ft_allarrange(all.block, all.amount_b);
	return (all);
}

static t_var	first_ff(t_var all, char **map, int var, t_block *block)
{
	all.map = map;
	all.var = var;
	all.block = block;
	all.c = 'A';
	all.size = size_map(map);
	return (all);
}

char			**ft_algorithm(char **map, t_block *block, int b, int var)
{
	t_var		all;

	all.amount_b = b;
	all = first_ff(all, map, var, block);
	while (all.var < all.amount_b)
	{
		all.temp = move_one(all.map, all.block[all.var]);
		if (all.temp.x[0] == -5)
			if (all.var == 0 || check_end(all.block[0], all.size))
				all = firs_f(all);
			else
			{
				if (all.var > 0 && all.c--)
					all.map = clean_by_coor(all.map, all.block[--all.var]);
				all.block[all.var] = move_r(all.block[all.var]);
			}
		else
		{
			all.block[all.var] = all.temp;
			all.y = all.var == all.amount_b - 1 ? 1 : 0;
			all.map = fill(all.block[all.var++], all.map, all.c++, all.y);
			all.block[all.var] = ft_arrange(all.block[all.var]);
		}
	}
	return (all.map);
}
