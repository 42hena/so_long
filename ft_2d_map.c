#include "so_long.h"

// 2차원 배열info->map에 값을 넣어주기
void insert_2D_map(t_info *info)
{
    int i;
    int x;
    int y;

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

// 2차원 배열info->map 동적할당
void create_2D_map(t_info *info)
{
    int i;
    int col;
    int row;

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

