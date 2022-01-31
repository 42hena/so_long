#include "so_long.h"

void	error_exit(char *error_command)
{
	write(1, "ERROR\n", 6);
	write(1, error_command, ft_strlen(error_command));
	exit(0);
}
