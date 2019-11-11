/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:09:14 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/26 14:42:52 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H

# define STRUCTURE_H

typedef struct	s_stack
{
	long		*stack;
	int			n_elem;
	char		no;
	long			min;
	long			min_sup;
	long			max;
	long			max_1;
	long			max_2;
}				t_stack;

typedef struct		s_stream
{
	char			*str;
	struct s_stream	*next;
}					t_stream;


#endif
