/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 00:08:17 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/08 00:08:18 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H

# define STRUCTURE_H

typedef struct		s_stack
{
	long			*stack;
	int				n_elem;
	int				max_malloc;
	char			no;
	long			min;
	long			max;
}					t_stack;

typedef struct		s_stream
{
	char			*str;
	struct s_stream	*next;
}					t_stream;

#endif
