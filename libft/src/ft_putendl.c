/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:14:48 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:15:05 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <unistd.h>

void	ft_putendl(char const *s)
{
	size_t	count;

	if (!s)
		return ;
	count = ft_strlen(s);
	write(1, s, count);
	write(1, "\n", 1);
}
