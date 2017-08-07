/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 17:13:54 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/06 21:56:55 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	if (nb <= 0)
	{
		return(0);
	}
	if (nb == 1)
		return (1);
	result = nb;
	while (nb > 1)
	{
		nb--;
		result *= nb;
	}
	return(result);
}
