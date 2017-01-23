/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allarrange.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 19:20:42 by mponomar          #+#    #+#             */
/*   Updated: 2017/01/18 19:21:14 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_block		*ft_allarrange(t_block *block, int amount_b)
{
	int i;

	i = 0;
	while (i < amount_b)
	{
		block[i] = ft_arrange(block[i]);
		i++;
	}
	return (block);
}
