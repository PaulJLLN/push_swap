/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test_array_len.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 12:51:23 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/20 13:05:34 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

Test(array_len, test0)
{
	char	**array;
	int		len;

	array = NULL;
	len = 1;
	len = array_len(array);
	cr_expect(len == 0, RED "/\\ ERROR /\\ array_len(NULL) =/= 0 /\\ ERROR /\\" DEFAULT);
}

Test(array_len, test1)
{
	char	**array;
	int		len;

	len = 1;
	array = array_alloc(array, len);
	array_init(array, len);
	array[0] = "Lorem.";
	len = array_len(array);
	cr_expect(len == 1, RED "/\\ ERROR /\\ array_len([\"Lorem.\"]) =/= 1 /\\ ERROR /\\" DEFAULT);
}

Test(array_len, test2)
{
	char	**array;
	int		len;

	len = 10;
	array = array_alloc(array, len);
	array_init(array, len);
	ft_array_add_element(array, "Ceci");
	ft_array_add_element(array, "Ceci");
	ft_array_add_element(array, "Ceci");
	ft_array_add_element(array, "Ceci");
	ft_array_add_element(array, "Ceci");
	ft_array_add_element(array, "Ceci");
	ft_array_add_element(array, "Ceci");
	ft_array_add_element(array, "Ceci");
	ft_array_add_element(array, "Ceci");
	ft_array_add_element(array, "Ceci");
	len = array_len(array);
	cr_expect(len == 10, RED "/\\ ERROR /\\ array_len([\"Ceci\"], [\"Ceci\"],[\"Ceci\"],[\"Ceci\"],[\"Ceci\"],[\"Ceci\"],[\"Ceci\"],[\"Ceci\"],[\"Ceci\"],[\"Ceci\"]) =/= 10 /\\ ERROR /\\" DEFAULT);
}