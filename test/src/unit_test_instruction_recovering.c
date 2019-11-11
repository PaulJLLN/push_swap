/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test_instruction_recovering.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:08:42 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/18 10:57:56 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char **av)
{
	char	**array;
	int		fd;
	int		fail;

	fd = 0;
	fail = 0;
	if (ft_strcmp(av[1], "TEST_1") == 0)
	{
	
		array = instruction_recovering(fd);
		if (ft_strcmp(array[0], "pa"))
		{
			printf(RED "ERROR_FAILURE 'pa'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[1], "pb"))
		{
			printf(RED "ERROR_FAILURE 'pb'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[2], "sa"))
		{
			printf(RED "ERROR_FAILURE 'sa'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[3], "sb"))
		{
			printf(RED "ERROR_FAILURE 'sb'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[4], "ss"))
		{
			printf(RED "ERROR_FAILURE 'ss'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[5], "ra"))
		{
			printf(RED "ERROR_FAILURE 'ra'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[6], "rb"))
		{
			printf(RED "ERROR_FAILURE 'rb'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[7], "rr"))
		{
			printf(RED "ERROR_FAILURE 'rr'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[8], "rra"))
		{
			printf( RED "ERROR_FAILURE 'rra'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[9], "rrb"))
		{
			printf( RED "ERROR_FAILURE 'rrb'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[10], "rrr"))
		{
			printf( RED "ERROR_FAILURE 'rrr'\n" DEFAULT);
			fail = 1;
		}
		if (array[11] != NULL)
		{
			printf( RED "ERROR_FAILURE 'NULL'\n" DEFAULT);
			fail = 1;
		}
		if (fail == 0)
			printf(GREEN "TEST SUCCESSED\n" DEFAULT);
	}
	else if (ft_strcmp(av[1], "TEST_2") == 0)
	{
		array = instruction_recovering(fd);
		if (ft_strcmp(array[0], "rra"))
		{
			printf(RED "ERROR_FAILURE 'rra'\n" DEFAULT);
			fail = 1;
		}
		if (array[1] != NULL)
		{
			printf( RED "ERROR_FAILURE 'NULL'\n" DEFAULT);
			fail = 1;
		}
		if (fail == 0)
			printf(GREEN "TEST SUCCESSED\n" DEFAULT);
	}
	else if (ft_strcmp(av[1], "TEST_3") == 0)
	{
		array = instruction_recovering(fd);
		if (ft_strcmp(array[0], "rra"))
		{
			printf(RED "ERROR_FAILURE 'rra'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[1], "sa"))
		{
			printf(RED "ERROR_FAILURE 'sa'\n" DEFAULT);
			fail = 1;
		}
		if (array[2] != NULL)
		{
			printf( RED "ERROR_FAILURE 'NULL'\n" DEFAULT);
			fail = 1;
		}
		if (fail == 0)
			printf(GREEN "TEST SUCCESSED\n" DEFAULT);
	}
	if (ft_strcmp(av[1], "TEST_4") == 0)
	{
		array = instruction_recovering(fd);
		if (array != NULL)
		{
			printf( RED "ERROR_FAILURE 'NULL'\n" DEFAULT);
			fail = 1;
		}
		if (fail == 0)
			printf(GREEN "TEST SUCCESSED\n" DEFAULT);
	}
	if (ft_strcmp(av[1], "TEST_5") == 0)
	{
		array = instruction_recovering(fd);
		if (ft_strcmp(array[0], ""))
		{
			printf(RED "ERROR_FAILURE ''\n" DEFAULT);
			fail = 1;
		}
		if (fail == 0)
			printf(GREEN "TEST SUCCESSED\n" DEFAULT);
	}
	else if (ft_strcmp(av[1], "TEST_6") == 0)
	{
		array = instruction_recovering(fd);
		if (ft_strcmp(array[0], "rrad"))
		{
			printf(RED "ERROR_FAILURE 'rrad'\n" DEFAULT);
			fail = 1;
		}
		if (fail == 0)
			printf(GREEN "TEST SUCCESSED\n" DEFAULT);
	}
	else if (ft_strcmp(av[1], "TEST_7") == 0)
	{
		array = instruction_recovering(fd);
		if (ft_strcmp(array[0], "rrad"))
		{
			printf(RED "ERROR_FAILURE 'rrad'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[1], "rrad"))
		{
			printf(RED "ERROR_FAILURE 'rrad'\n" DEFAULT);
			fail = 1;
		}
		if (fail == 0)
			printf(GREEN "TEST SUCCESSED\n" DEFAULT);
	}
	else if (ft_strcmp(av[1], "TEST_8") == 0)
	{
		array = instruction_recovering(fd);
		if (ft_strcmp(array[0], "rrad"))
		{
			printf(RED "ERROR_FAILURE 'rrad'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[1], "rra"))
		{
			printf(RED "ERROR_FAILURE 'rra'\n" DEFAULT);
			fail = 1;
		}
		if (fail == 0)
			printf(GREEN "TEST SUCCESSED\n" DEFAULT);
	}
	else if (ft_strcmp(av[1], "TEST_9") == 0)
	{
		array = instruction_recovering(fd);
		if (ft_strcmp(array[0], "sa"))
		{
			printf(RED "ERROR_FAILURE 'sa'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[1], "sb"))
		{
			printf(RED "ERROR_FAILURE 'sb'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[2], "pa"))
		{
			printf(RED "ERROR_FAILURE 'pa'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[3], "sa"))
		{
			printf(RED "ERROR_FAILURE 'sa'\n" DEFAULT);
			fail = 1;
		}
		if (ft_strcmp(array[4], "rra"))
		{
			printf(RED "ERROR_FAILURE 'rra'\n" DEFAULT);
			fail = 1;
		}
		if (fail == 0)
			printf(GREEN "TEST SUCCESSED\n" DEFAULT);
	}
	else if (ft_strcmp(av[1], "TEST_10") == 0)
	{
		array = instruction_recovering(fd);
		if (ft_strcmp(array[0], "sa    "))
		{
			printf(RED "ERROR_FAILURE 'sa    '\n" DEFAULT);
			fail = 1;
		}
		if (fail == 0)
			printf(GREEN "TEST SUCCESSED\n" DEFAULT);
	}
	return (0);
}