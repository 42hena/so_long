#include "so_long.h"

static bool	is_possible(t_info *info, int posx, int posy)
{
	if (info->map[posx][posy] == '1')
		return (false);
	return (true);
}

int	key_press(int keycode, t_info *info)
{
	int	x;
	int	y;

	x = info->pos.x;
	y = info->pos.y;
	if (keycode == KEY_W && is_possible(info, x - 1, y))
		move_top(info, x, y);
	else if (keycode == KEY_S && is_possible(info, x + 1, y))
		move_down(info, x, y);
	else if (keycode == KEY_A && is_possible(info, x, y - 1))
		move_left(info, x, y);
	else if (keycode == KEY_D && is_possible(info, x, y + 1))
		move_right(info, x, y);
	else if (keycode == KEY_ESC)
		exit(0);
	return (0);
}
