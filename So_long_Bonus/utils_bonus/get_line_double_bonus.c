/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line_double_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:57:53 by aitaouss          #+#    #+#             */
/*   Updated: 2024/01/09 21:49:43 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

static char	*ft_stradd(char *str, char buff)
{
	int		i;
	char	*retu;

	i = 0;
	retu = (char *)malloc(sizeof(char) * (ft_strleny(str) + 2));
	if (retu == NULL)
		return (NULL);
	while (str[i])
	{
		retu[i] = str[i];
		i++;
	}
	free(str);
	retu[i] = buff;
	retu[++i] = '\0';
	return (retu);
}

int	get_line_double(int fd, char **str)
{
	char			buff;
	int				retu;
	int				i;

	i = 0;
	retu = read(fd, &buff, 1);
	while (retu > 0)
	{
		*str = ft_stradd(*str, buff);
		if (buff == '\n')
			return (retu);
		else
			retu += 1;
		retu = read(fd, &buff, 1);
		i++;
	}
	if (i > 0 && buff != '\n')
		print_string("Error\nFormat of Map invalid\n");
	if (retu == 0)
	{
		free(*str);
		*str = NULL;
	}
	return (retu);
}
