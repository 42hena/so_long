#include "so_long.h"

void get_pos_info(t_info *info)
{
	int i;
	int j;	

	i = 0;
	j = 0;
	while (++i < info->map_height - 1)
	{
		while (++j < info->map_width - 1)
		{
			if (info->map[i][j] == 'P')
			{
				info->pos.x = i;
				info->pos.y = j;
			}
			if (info->map[i][j] == 'E')
			{
				info->exit_pos.x = i;
				info->exit_pos.y = j;
			}
		}
		j = 0;
	}
}

void check_info(t_info *info)
{
	if (info->player_cnt != 1)
		error_exit("player Cnt is not 1");
	if (info->exit_cnt != 1)
		error_exit("exit Cnt is not 1");
	if (info->collect_cnt < 0)
		error_exit("collect is not exist");
}

static void	get_count_info(t_info *info)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (++i < info->map_height - 1)
	{
		while (++j < info->map_width - 1)
		{
			if (info->map[i][j] == 'C')
				info->collect_cnt++;
			if (info->map[i][j] == 'P')
				info->player_cnt++;
			if (info->map[i][j] == 'E')
				info->exit_cnt++;
		}
		j = 0;
	}
}

void map_check(t_info *info)
{
	is_around_wall(info);
	printf("%d %d\n", info->map_width, info->map_height);
	get_count_info(info);
	printf("%d %d\n", info->map_width, info->map_height);
	check_info(info);
	get_pos_info(info);
}
