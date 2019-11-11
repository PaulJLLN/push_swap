/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:34:16 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/23 16:45:59 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H

# define TEST_H

#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include "/Users/pauljull/.brew/Cellar/criterion/2.3.3/include/criterion/criterion.h"
#include "../../includes/push_swap.h"

# define RED "\033[0;31m"
# define DEFAULT "\033[0m"
# define GREEN "\033[0;32m"

void	stat_set_stack(t_stack *stack);


#endif