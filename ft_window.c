/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_window.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:29:49 by hena              #+#    #+#             */
/*   Updated: 2022/02/03 14:29:50 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_tile(t_info *info)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (++i < info->map_height)
	{
		while (++j < info->map_width)
		{
			mlx_put_image_to_window(info->mlx, info->win, \
					info->img_tile, j * 72, i * 72);
		}
		j = -1;
	}
}

void	put_image(t_info *info)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (++i < info->map_height)
	{
		while (++j < info->map_width)
		{
			if (info->map[i][j] == '1')
				mlx_put_image_to_window(info->mlx, info->win, \
					   	info->img_tree, j * 72, i * 72);
			if (info->map[i][j] == 'P')
				mlx_put_image_to_window(info->mlx, info->win, \
						info->player_d0, j * 72, i * 72);
			if (info->map[i][j] == 'C')
				mlx_put_image_to_window(info->mlx, info->win, \
						info->img_coin, j * 72, i * 72);
			if (info->map[i][j] == 'E')
				mlx_put_image_to_window(info->mlx, info->win, \
						info->img_exit, j * 72, i * 72);
		}
		j = -1;
	}
}

void	init_window(t_info *info)
{
	info->win = mlx_new_window(info->mlx, 72 * info->map_width, \
			72 * info->map_height, info->map_name);
	put_tile(info);
	put_image(info);
	printf("%d %d\n", info->pos.x, info->pos.y);
	printf("%d %d\n", info->exit_pos.x, info->exit_pos.y);
}
