/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:58:38 by pauljull          #+#    #+#             */
/*   Updated: 2019/09/18 06:48:41 by pauljull         ###   ########.fr       */
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
