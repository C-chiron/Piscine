/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchiron <cchiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 08:32:59 by cchiron           #+#    #+#             */
/*   Updated: 2016/09/03 18:17:39 by cchiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_iterative_factorial(int nb)
{
	int v;

	v = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 12)
	{
		return (0);
	}
	while (nb > 1)
	{
		v = (v * (nb - 1));
		--nb;
	}
	return (v);
}
