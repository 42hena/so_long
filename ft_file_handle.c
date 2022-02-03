#include "so_long.h"

static void	get_map_size(t_info *info)
{
	int	i;
	int	col;
	int	row;

	i = 0;
	col = 0;
	row = 0;
	while (info->buf[i])
	{
		if (info->buf[i] == '\n')
			col++;
		if (info->buf[i] != '\n')
			row++;
		i++;
	}
	info->map_width = row / col;
	info->map_height = col;
}

static void	read_file_save(t_info *info, int fd)
{
	int		n;
	char	buf[BUFF_SIZE + 1];
	char	*tmp;

	info->buf = NULL;
	while (true)
	{
		n = read(fd, buf, BUFF_SIZE);
		if (n <= 0)
			break ;
		buf[n] = 0;
		tmp = (char *)malloc(sizeof(char) * (n + ft_strlen(info->buf) + 1));
		tmp[n + ft_strlen(info->buf)] = 0;
		ft_strcpy(tmp, buf);
		info->buf = tmp;
	}
	if (n == -1)
		error_exit("Cant read file");
}

static int	open_file(t_info *info)
{
	int	fd;

	fd = open(info->map_name, O_RDONLY, 0644);
	if (fd < 0)
		error_exit("fd is not correct");
	return (fd);
}

int	file_handleing(t_info *info)
{
	int	ret;
	int	fd;

	fd = open_file(info);
	read_file_save(info, fd);
	get_map_size(info);
	create_2D_map(info);
	insert_2D_map(info);
	return (1);
}
