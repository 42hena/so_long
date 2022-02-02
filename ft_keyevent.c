#include "so_long.h"

static bool	is_possible(t_info *info, int posx, int posy)
{
	if (info->map[posx][posy] == '1')
		return (false);
	return (true);
}

int		key_press(int keycode, t_info *info)
{
	int x = info->pos.x;
	int y = info->pos.y;

	if ((keycode == KEY_W || keycode == KEY_UP) && is_possible(info, x - 1, y))
		move_top(info, x, y);
	else if ((keycode == KEY_S || keycode == KEY_DOWN) && is_possible(info, x + 1, y))
		move_down(info, x, y);
	else if ((keycode == KEY_A || keycode == KEY_LEFT) && is_possible(info, x, y - 1))
		move_left(info, x, y);
	else if ((keycode == KEY_D || keycode == KEY_RIGHT) && is_possible(info, x, y + 1))
		move_right(info, x, y);
	else if (keycode == KEY_ESC)
		exit(0);
	printf("%d %d\n", info->pos.x, info->pos.y);
	print(info);
	printf("move cnt: %d\n", info->move_cnt);
	return (0);
}
