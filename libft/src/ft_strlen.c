/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:19:55 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:20:33 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strlen(const char *s)
{
	int	index;

	if (!s)
		return (0);
	index = 0;
	while (s[index] != 0)
		index += 1;
	return (index);
}
