/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchiron <cchiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 18:50:11 by cchiron           #+#    #+#             */
/*   Updated: 2016/09/03 23:52:54 by cchiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_factorial(int nb)
{
	if (nb > 12)
	{
		return (0);
	}
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
