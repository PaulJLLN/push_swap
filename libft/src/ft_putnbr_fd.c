/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:16:55 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:17:49 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n >= 0 && n < 10)
		ft_putchar_fd(n + '0', fd);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n > -10)
			ft_putchar_fd(-n + '0', fd);
		else
		{
			ft_putnbr_fd(-(n / 10), fd);
			ft_putchar_fd(-(n % 10) + '0', fd);
		}
	}
}
