/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:28:06 by hena              #+#    #+#             */
/*   Updated: 2022/02/03 14:28:07 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error_exit(char *error_command)
{
	write(1, "ERROR\n", 6);
	write(1, error_command, ft_strlen(error_command));
	exit(0);
}
