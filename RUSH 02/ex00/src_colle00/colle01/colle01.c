/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvigne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 09:26:30 by mvigne            #+#    #+#             */
/*   Updated: 2017/08/20 12:08:14 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tools.h"

void	colle01(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y && x > 0)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1))
				ft_putchar('/');
			else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
				ft_putchar('\\');
			else if (((i != 0 && i != y - 1) && (j == 0 || j == x - 1)))
				ft_putchar('*');
			else if ((i == 0 || i == y - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
