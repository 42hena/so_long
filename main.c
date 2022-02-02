#include "so_long.h"

int close_window(t_info *info)
{
	mlx_destroy_window(info->mlx, info->win);
	exit(0);
}

void print(t_info *info)
{
	printf("%d %d\n", info->map_width, info->map_height);
	
	for (int i = 0 ; i < info->map_height ; ++i)
	{	
		for (int j = 0 ; j < info->map_width ; ++j)
		{
			printf("%c", info->map[i][j]);
		}	
		printf("\n");
	}
	
}

void over_check(t_info *info)
{
	int ex;
	int ey;
	int px;
	int py;

	px = info->pos.x;
	py = info->pos.y;
	ex = info->exit_pos.x;
	ey = info->exit_pos.y;
	if (!info->collect_cnt && ex == px && ey == py)
		exit(0);
}

int	main_loop(t_info *info)
{
	over_check(info);
	put_tile(info);
	put_image(info);
	return (0);
}

int	main(int argc, char **argv)
{
	t_info	info;

	//argc, argv체크
	check_parameter(argc, argv[1], &info);

	// info 초기화
	init_info(&info);

	//file handleing
	file_handleing(&info);
	print(&info);

	// mapcheck
	map_check(&info);

	init_window(&info);
	mlx_hook(info.win, X_EVENT_KEY_PRESS, 0, &key_press, &info);
	mlx_hook(info.win, X_EVENT_KEY_EXIT, 0, &close_window, &info);

	mlx_loop_hook(info.mlx, &main_loop, &info);
	
	mlx_loop(info.mlx);
}
