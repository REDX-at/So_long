/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mapber_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:03:52 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/09 23:36:31 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

int	check_map_ber(char *str)
{
	int	i;
	int	res;

	i = 0;
	while (str[i])
	{
		if (str[i] == '.')
		{
			res = ft_strncmp(str + i, ".ber", 4);
			if (res == 0)
			{
				if (str[i + 4] == '\0')
					return (1);
				else
					return (0);
			}
		}
		i++;
	}
	return (0);
}
