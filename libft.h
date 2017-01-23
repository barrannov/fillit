/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 17:09:08 by mponomar          #+#    #+#             */
/*   Updated: 2017/01/20 21:30:14 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct	s_block
{
	int			x[4];
	int			y[4];
	int			move[2];
}				t_block;

typedef struct	s_var
{
	int			amount_b;
	char		**map;
	int			size;
	int			y;
	t_block		temp;
	t_block		*block;
	char		c;
	int			var;
}				t_var;

t_block			*ft_fill_coor(char *str, int amount_block, t_block *res);
void			ft_putchar(char c);
void			ft_error();
void			ft_putstr(char const *s);
char			*ft_read(char *s);
char			*ft_strdup(const char *str);
int				ft_valid(char *s, int i, int has, int l);
char			**ft_create_map(int amount_blocks);
t_block			ft_arrange(t_block block);
char			**ft_algorithm(char **map, t_block *block, int amount_b,
				int var);
t_block			*ft_allarrange(t_block *block, int amount_b);
t_block			move_r(t_block block);
t_block			move_l(t_block block);
int				check_min(t_block block, char **map);
t_block			move_coor_r(char **map, t_block block);
int				size_map(char **map);
int				check_end(t_block block, int size);
char			**clean_by_coor(char **map, t_block block);
t_block			move_coor_rad(char **map, t_block block);
char			**fill(t_block block, char **map, char c, int amount);
void			print_map(char **map);
t_block			ft_charrange2(t_block block);
t_block			move_one(char **map, t_block block);

#endif
