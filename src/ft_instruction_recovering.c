/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_recovering.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:01:47 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/23 13:06:24 by pauljull         ###   ########.fr       */
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
		return (VALID_PARSE_LONG);
	else
		return (ERROR_PARSE_LONG);
	free(tmp);
	return (VALID_PARSE_LONG);
}

t_list		*ft_instruction_recovering(int fd)
{
	t_list	*list;

	list = NULL;
	if (ft_read(&list, fd) == ERROR_PARSE_LONG)
		return (NULL);
	if (!list)
		ft_lst_push_back(&list, "", 1);
	else if (ft_instruction_validity_checking(list) == ERROR_PARSE_LONG)
		return (NULL);
	return (list);
}
