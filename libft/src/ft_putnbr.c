/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:16:50 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:17:48 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr(int n)
{
	if (n >= 0 && n < 10)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	if (n < 0)
	{
		ft_putchar('-');
		if (n > -10)
			ft_putnbr(-n);
		else
		{
			ft_putnbr(-(n / 10));
			ft_putchar(-(n % 10) + '0');
		}
	}
}
