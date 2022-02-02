#include "so_long.h"
static void init_img_player(t_info *info)
{
	int width;
	int height;

	info->player_u0 = mlx_xpm_file_to_image(info->mlx, "./img/pu0.xpm", &width, &height);
    info->player_l0 = mlx_xpm_file_to_image(info->mlx, "./img/pl0.xpm", &width, &height);
    info->player_d0 = mlx_xpm_file_to_image(info->mlx, "./img/pd0.xpm", &width, &height);
    info->player_r0 = mlx_xpm_file_to_image(info->mlx, "./img/pr0.xpm", &width, &height);
}

static void init_img_map(t_info *info)
{
	int width;
	int height;

    info->img_tree = mlx_xpm_file_to_image(info->mlx, "./img/tree.xpm", &width, &height);
    info->img_tile = mlx_xpm_file_to_image(info->mlx, "./img/tile.xpm", &width, &height);
    info->img_exit = mlx_xpm_file_to_image(info->mlx, "./img/exit.xpm", &width, &height);
    info->img_coin = mlx_xpm_file_to_image(info->mlx, "./img/coin.xpm", &width, &height);
}

static void init_pos(t_param *param)
{
	param->x = -1;
	param->y = -1;
}

void init_info(t_info *info)
{
	info->mlx = mlx_init();
	info->playing = true;
	info->map = NULL;
	info->buf = NULL;
	info->exit_cnt = 0;
	info->player_cnt = 0;
	info->collect_cnt = 0;
	info->move_cnt = 0;
	init_img_player(info);
	init_img_map(info);
	init_pos(&info->pos);
	init_pos(&info->exit_pos);
}
