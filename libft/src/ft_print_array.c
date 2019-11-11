/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:52:20 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/03 10:37:48 by pauljull         ###   ########.fr       */
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
