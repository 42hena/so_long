#include "so_long.h"

static void	check_argc(int argc)
{
	if (argc != 2)
		error_exit("argc is not 2");
}

static void	check_filename(char *name, t_info *info)
{
	int	size;

	size = ft_strlen(name);
	if (!(size >= 4 && !ft_strcmp(&name[size - 4], ".ber")))
		error_exit("filename does not correct");
	info->map_name = name;
}

// argc, filename_check
void check_parameter(int argc, char *name, t_info *info)
{
	check_argc(argc);
	check_filename(name, info);
}
