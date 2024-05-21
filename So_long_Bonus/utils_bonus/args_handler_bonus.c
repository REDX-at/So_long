/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_handler_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 20:54:53 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/09 18:14:26 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	args_handler(int argc)
{
	if (argc > 2)
		ft_printf("%sError\nArgument More than 2.\n", WHITE);
	if (argc == 1)
		ft_printf("%sError\nArgumet not enough ADD one More ...\n", WHITE);
}
