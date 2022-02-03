/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:58:31 by hena              #+#    #+#             */
/*   Updated: 2022/02/03 15:09:47 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *arr1, char *arr2)
{
	unsigned char	c1;
	unsigned char	c2;

	while (1)
	{
		c1 = *arr1++;
		c2 = *arr2++;
		if (c1 != c2)
		{
			if (c1 < c2)
				return (-1);
			else
				return (1);
		}
		if (!c1)
			break ;
	}
	return (0);
}
