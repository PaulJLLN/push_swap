/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:14:20 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:15:04 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "unistd.h"

void	ft_print_lst(t_list *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		write(1, lst->content, ft_strlen(lst->content));
		write(1, "\n", 1);
		lst = lst->next;
	}
}
