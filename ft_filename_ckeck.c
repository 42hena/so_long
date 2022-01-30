#include "so_long.h"

bool	ft_filename_check(char *name)
{
	int	size;

	size = ft_strlen(name);
	if (size >= 4 && ft_strcmp(&name[size - 4], ".ber"))
		return (true);
	return (false);
}
