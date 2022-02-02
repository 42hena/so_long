#include "so_long.h"

void move_top(t_info *info, int x, int y)
{
	int ex;
	int ey;

	ex = info->exit_pos.x;
	ey = info->exit_pos.y;
    if (info->map[x - 1][y] == 'C')
        info->collect_cnt--;
    info->map[x - 1][y] = 'P';
	if (x == ex && y == ey)
    	info->map[x][y] = 'E';
	else
    	info->map[x][y] = '0';
	info->pos.x--;
	info->move_cnt++;
}

void move_down(t_info *info, int x, int y)
{
	int ex;
	int ey;

	ex = info->exit_pos.x;
	ey = info->exit_pos.y;
    if (info->map[x + 1][y] == 'C')
        info->collect_cnt--;
    info->map[x + 1][y] = 'P';
	if (x == ex && y == ey)
    	info->map[x][y] = 'E';
	else
    	info->map[x][y] = '0';
	info->pos.x++;
	info->move_cnt++;
}

void move_left(t_info *info, int x, int y)
{
	int ex;
	int ey;

	ex = info->exit_pos.x;
	ey = info->exit_pos.y;
    if (info->map[x][y - 1] == 'C')
        info->collect_cnt--;
    info->map[x][y - 1] = 'P';
	if (x == ex && y == ey)
    	info->map[x][y] = 'E';
	else
    	info->map[x][y] = '0';
	info->pos.y--;
	info->move_cnt++;
}

void move_right(t_info *info, int x, int y)
{
	int ex;
	int ey;

	ex = info->exit_pos.x;
	ey = info->exit_pos.y;
    if (info->map[x][y + 1] == 'C')
        info->collect_cnt--;
    info->map[x][y + 1] = 'P';
	if (x == ex && y == ey)
    	info->map[x][y] = 'E';
	else
    	info->map[x][y] = '0';
	info->pos.y++;
	info->move_cnt++;
}
