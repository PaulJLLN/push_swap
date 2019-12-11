/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arithmetic_operation.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:04:27 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:06:06 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long	ft_addition_func(long n_1, long n_2)
{
	return (n_1 + n_2);
}

long	ft_substract_func(long n_1, long n_2)
{
	return (n_1 - n_2);
}

long	ft_multiplication_func(long n_1, long n_2)
{
	return (n_1 * n_2);
}

long	ft_division_func(long n_1, long n_2)
{
	if (n_2 == 0)
		return (L_FALSE);
	return (n_1 / n_2);
}

long	ft_modulo_func(long n_1, long n_2)
{
	if (n_2 == 0)
		return (L_FALSE);
	return (n_1 % n_2);
}
