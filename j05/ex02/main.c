/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 22:12:59 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/06 19:56:30 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_atoi.h"

int main()
{
	char *str = "-2040483657";
	
	int transpo = ft_atoi(str);
	printf("%d", transpo);
}
