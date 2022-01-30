#include "so_long.h"

int	main(int argc, char **argv)
{
	t_info	info;
	int		ret;

	if (argc != 2)
	{
		write(1, "argc is not 2\n", 14);
		return (0);
	}

	// file and map
	file_handleing(&info, argv[1]);
	ft_print_map(&info);
	// display
	//info.mlx = mlx_init();
	//init_info(&info);
	//init_window(&info);
	//mlx_hook(info.win, X_EVENT_KEY_PRESS, 0, &key_press, &info.pos);
	//Test(&info);
	//mlx_loop(info.mlx);
	return (0);
}
