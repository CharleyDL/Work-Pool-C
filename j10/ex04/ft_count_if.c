/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:30:52 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/23 17:53:36 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int x;
	int cptr;

	x = 0;
	cptr = 0;
	while (tab[x])
	{
		if ((*f)(tab[x]) == 1)
		{
			cptr++;
			x++;
		}
		x++;
	}
	return (cptr);
}
