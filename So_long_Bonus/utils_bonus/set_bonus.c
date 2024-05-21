/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 23:37:27 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/09 18:16:08 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	set_content(t_cnt *content)
{
	content->exit = 'E';
	content->player = 'P';
	content->wall = '1';
	content->space = '0';
	content->collect = 'C';
	content->enemie = 'N';
	content->count_p = 0;
	content->count_e = 0;
	content->count_c = 0;
	content->count_n = 0;
	content->count_enemie = 1;
}

void	set_image(t_data *data)
{
	data->imgs.height = 48;
	data->imgs.width = 48;
	data->imgs.enemie = "./texture/enemie_pack.xpm";
	data->imgs.wall = "./texture/wall_pack.xpm";
	data->imgs.floor = "./texture/space_pack.xpm";
	data->imgs.player = "./texture/right_pack.xpm";
	data->imgs.collect = "./texture/ghost_pack.xpm";
	data->imgs.exit = "./texture/dorclose_pack.xpm";
	data->imgs.collect = mlx_xpm_file_to_image(data->mlx, data->imgs.collect,
			&data->imgs.width, &data->imgs.height);
	data->imgs.wall = mlx_xpm_file_to_image(data->mlx, data->imgs.wall,
			&data->imgs.width, &data->imgs.height);
	data->imgs.floor = mlx_xpm_file_to_image(data->mlx, data->imgs.floor,
			&data->imgs.width, &data->imgs.height);
	data->imgs.player = mlx_xpm_file_to_image(data->mlx, data->imgs.player,
			&data->imgs.width, &data->imgs.height);
	data->imgs.exit = mlx_xpm_file_to_image(data->mlx, data->imgs.exit,
			&data->imgs.width, &data->imgs.height);
	data->imgs.enemie = mlx_xpm_file_to_image(data->mlx, data->imgs.enemie,
			&data->imgs.width, &data->imgs.height);
	if (!data->imgs.wall || !data->imgs.floor || !data->imgs.player
		|| !data->imgs.collect || !data->imgs.exit || !data->imgs.enemie)
		print_string("Error\nXpm not found .\n");
}
