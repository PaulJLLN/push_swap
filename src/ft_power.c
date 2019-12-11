/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:26:51 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:27:27 by cghanime         ###   ########.fr       */
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
