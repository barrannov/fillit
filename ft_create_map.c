/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:55:43 by mponomar          #+#    #+#             */
/*   Updated: 2017/01/20 19:50:45 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_create_map(int size)
{
	int		x;
	int		i;
	int		j;
	char	**res;

	x = size;
	j = 0;
	res = (char **)malloc((x) * sizeof(char*) + 1);
	i = 0;
	while (i < x)
	{
		res[i] = (char *)malloc((x) * sizeof(char*) + 1);
		while (j < x)
		{
			res[i][j] = '.';
			j++;
		}
		res[i][j] = '\0';
		j = 0;
		i++;
	}
	res[i] = (char *)'\0';
	return (res);
}
