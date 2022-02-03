/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parameter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:28:38 by hena              #+#    #+#             */
/*   Updated: 2022/02/03 14:28:39 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	check_parameter(int argc, char *name, t_info *info)
{
	check_argc(argc);
	check_filename(name, info);
}
