/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 16:06:48 by abaranov          #+#    #+#             */
/*   Updated: 2017/01/20 21:01:11 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(int argc, char **argv)
{
	char	*tmp;
	int		amount_b;
	char	**map;
	int		x;
	t_block	*blocks;

	x = 2;
	blocks = NULL;
	if (argc != 2)
		ft_error();
	tmp = ft_read(argv[1]);
	amount_b = ft_valid(tmp, 0, 4, 0);
	while ((4 * amount_b) > (x * x))
		x++;
	map = ft_create_map(x);
	blocks = ft_fill_coor(tmp, amount_b, blocks);
	blocks = ft_allarrange(blocks, amount_b);
	map = ft_algorithm(map, blocks, amount_b, 0);
	return (0);
}
