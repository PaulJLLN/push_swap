/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:54:01 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/03 11:04:50 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"
#include <stdio.h>

int main()
{
	char	**array;
	int		i;
	int len;

	len = 3;
	i = 0;
	array = ft_array_alloc(len);
	while (i < len)
	{
		ft_array_add_element(array, "coucou");
		ft_print_array(array, len);
		printf("\n");
		i += 1;
	}
	return 0;
}