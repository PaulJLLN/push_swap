/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_recovering.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:26:37 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:27:27 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long		ft_read(t_list **list, int fd)
{
	char	*inst;
	char	*tmp;
	char	buffer[BUFF_SIZE + 1];
	int		ret;

	tmp = NULL;
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = 0;
		tmp = ft_strjoinf(tmp, buffer, 1);
		while (ft_strchr(tmp, '\n') != NULL)
		{
			inst = ft_strpdupf(tmp, '\n', &tmp);
			ft_lst_push_back(list, inst, ft_strlen(inst));
			free(inst);
		}
	}
	if (tmp == NULL)
		return (L_TRUE);
	else
	{
		free(tmp);
		return (L_FALSE);
	}
}

t_list		*ft_instruction_recovering(int fd)
{
	t_list	*list;

	list = NULL;
	if (ft_read(&list, fd) == L_FALSE)
	{
		ft_lst_free(&list);
		return (NULL);
	}
	if (!list)
		ft_lst_push_back(&list, "", 1);
	else if (ft_instruction_validity_checking(list) == L_FALSE)
		return (NULL);
	return (list);
}
