/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:08:03 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:08:16 by cghanime         ###   ########.fr       */
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
