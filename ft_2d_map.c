/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2d_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:27:32 by hena              #+#    #+#             */
/*   Updated: 2022/02/03 14:27:33 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	insert_2D_map(t_info *info)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 0;
	y = 0;
	while (info->buf[i])
	{
		if (info->buf[i] == '\n')
		{
			info->map[x][y] = 0;
			x++;
			y = 0;
		}
		else
		{
			info->map[x][y] = info->buf[i];
			y++;
		}
		i++;
	}
}

void	create_2D_map(t_info *info)
{
	int	i;
	int	col;
	int	row;

	col = info->map_height;
	row = info->map_width;
	info->map = (char **)malloc(sizeof(char *) * col);
	i = -1;
	while (++i < col)
	{
		info->map[i] = (char *)malloc(sizeof(char) * (row / col + 1));
		info->map[i][(row / col)] = '\0';
	}
}
