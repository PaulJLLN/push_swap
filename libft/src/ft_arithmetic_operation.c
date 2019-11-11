/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arithmetic_operation.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:25:24 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/30 17:12:11 by pauljull         ###   ########.fr       */
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
		return (ERROR_PARSE_LONG);
	return (n_1 / n_2);
}

long	ft_modulo_func(long n_1, long n_2)
{
	if (n_2 == 0)
		return (ERROR_PARSE_LONG);
	return (n_1 % n_2);
}
