/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 21:20:43 by mponomar          #+#    #+#             */
/*   Updated: 2017/01/20 19:28:42 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char *str, int count, int i)
{
	if (str[i] == '#' && str[i + 5] == '#')
		count++;
	if (str[i] == '#' && str[i - 5] == '#')
		count++;
	if (str[i] == '#' && str[i - 1] == '#')
		count++;
	if (str[i] == '#' && str[i + 1] == '#')
		count++;
	return (count);
}

static void	ft_valid_touch(char *str, int amount_blocks)
{
	int		count;
	int		i;
	int		t;

	t = 0;
	count = 0;
	i = 0;
	while (str[t])
		t++;
	if ((t - amount_blocks + 1) % 4 != 0)
		ft_error();
	while (str[i])
	{
		count = check(str, count, i);
		if ((str[i] == '\n' && str[i + 1] == '\n') || i == t - 1)
		{
			if (count < 6 || count > 10)
				ft_error();
			count = 0;
		}
		i++;
	}
}

int			ft_valid(char *str, int i, int in_b, int l)
{
	int a[3];

	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
	while (str[i])
	{
		l++;
		str[i] == '.' ? a[1]++ : 0;
		str[i] == '#' ? a[2]++ : 0;
		str[i] == '\n' ? a[0]++ : 0;
		if ((str[i] == '\n' && str[i + 1] == '\n') || i == 19)
		{
			a[2] != in_b ? ft_error() : 0;
			i + 1 != 20 && l != 21 ? ft_error() : 0;
			i + 1 == 20 && l != 20 ? ft_error() : 0;
			in_b += 4;
			l = 0;
		}
		i++;
	}
	if (a[1] % 4 != 0 || (a[0] + 1) % 5 != 0 || a[2] % 4 != 0 || a[2] / 4 > 26)
		ft_error();
	ft_valid_touch(str, a[2] / 4);
	return (a[2] / 4);
}
