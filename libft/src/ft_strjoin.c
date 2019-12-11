/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:19:42 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:20:33 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	len_s1;
	unsigned int	len_s2;
	unsigned int	count;

	count = 0;
	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!(str = ft_strnew(len_s1 + len_s2)))
		return (NULL);
	while (count < len_s1)
	{
		str[count] = s1[count];
		count += 1;
	}
	count = 0;
	while (count < len_s2)
	{
		str[len_s1 + count] = s2[count];
		count += 1;
	}
	return (str);
}
