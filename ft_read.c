/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 16:04:31 by abaranov          #+#    #+#             */
/*   Updated: 2017/01/21 15:47:53 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_read(char *s)
{
	char	res[545];
	char	buff[1];
	int		fd;
	int		i;

	i = 0;
	if ((fd = (open(s, O_RDONLY))) == -1)
		ft_error();
	while (read(fd, buff, 1))
	{
		if (i > 545)
			ft_error();
		res[i++] = buff[0];
	}
	res[i] = '\0';
	close(fd);
	return (ft_strdup(res));
}
