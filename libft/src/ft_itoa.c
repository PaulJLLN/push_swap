/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 10:17:31 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/30 17:14:17 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

static int			ft_abs_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static unsigned int	ft_digit_count(int n)
{
	unsigned int	count;

	count = 0;
	while ((n / 10) != 0)
	{
		count += 1;
		n /= 10;
	}
	return (count + 1);
}

char				*ft_itoa(int n)
{
	char			*str;
	char			sign;
	int				count;

	sign = 0;
	count = ft_digit_count(n);
	if (n < 0)
		sign += 1;
	if (!(str = (char*)malloc(sizeof(char) * (count + sign + 1))))
		return (NULL);
	str[count + sign] = 0;
	if (n < 0)
		str[0] = '-';
	while (count > 0)
	{
		str[count + sign - 1] = ft_abs_value(n % 10) + '0';
		count -= 1;
		n /= 10;
	}
	return (str);
}
