/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:14:12 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:15:04 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_print_array(char **array, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (array[i] == NULL)
			ft_putstr("NULL");
		else
			ft_putstr(array[i]);
		i += 1;
		ft_putchar('\n');
	}
}
