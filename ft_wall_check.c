#include "so_long.h"

int is_wall(char c)
{
	if (c == '1')
		return (1);
	return (0);
}

void is_around_wall(t_info *info)
{
	int i;
	int j;
	int row;
	int col;

	write(1, "fasdf", 5);
	row = info->map_width;
	col = info->map_height;
	i = -1;
	j = -1;
	while (++i < col)
	{
		if (i == 0 || i == col - 1)
		{
			while (++j < row)
				if (!is_wall(info->map[i][j]))
					error_exit("not wall");
			j = -1;
		}
		else
			if (!(is_wall(info->map[i][0]) && is_wall(info->map[i][row - 1])))
				error_exit("not wall");
	}
	write(1, "fasdf", 5);

}