/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:16:33 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/30 22:31:50 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

unsigned long	ft_power_signed(long nb, long pow)
{
	if (pow == 0)
		return (1);
	nb = nb * ft_power_signed(nb, pow - 1);
	return (nb);
}

unsigned long	ft_power_unsigned(unsigned long nb, long pow)
{
	if (pow == 0)
		return (1);
	nb = nb * ft_power_unsigned(nb, pow - 1);
	return (nb);
}
