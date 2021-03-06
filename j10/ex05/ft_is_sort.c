/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 12:20:33 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/24 12:20:59 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int x;
	int crois;
	int dcrois;

	x = 0;
	crois = 1;
	dcrois = 1;
	while (x < length - 1)
	{
		if (f(tab[x], tab[x + 1]) < 0)
			crois = 0;
		if (f(tab[x], tab[x + 1]) > 0)
			dcrois = 0;
		x++;
	}
	return (crois || dcrois);
}
