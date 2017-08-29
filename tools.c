/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchartie <pchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 14:03:27 by pchartie          #+#    #+#             */
/*   Updated: 2015/10/27 14:07:03 by pchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	init_with_points(t_result *res)
{
	int i;

	i = 0;
	while (i < 200)
	{
		res->map[i] = '.';
		i++;
	}
}

void	diez_position(t_tris *tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i].tetriminos != NULL)
	{
		j = 0;
		while (tab[i].tetriminos[j] == '.')
			j++;
		tab[i].diez_position = j;
		i++;
	}
}

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while ((i * i) < nb)
		i++;
	return (i);
}
