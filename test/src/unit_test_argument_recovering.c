/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test_argument_recovering.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:36:52 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/18 22:40:10 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

Test(array_init_test, Test1)
{
	char **array;
	int	len;

	len = 5;
	array = NULL;
	if (!(array = (char **)malloc(sizeof(char *) * len)))
		return ;
	array_init(array, len);
//	print_array(array, len);
}

Test(parse_array_test, test1)
{
	int	arg;

	arg = parse_array(NULL);
	cr_expect(arg == 0, "ERROR_FAIL");
}

Test(parse_array_test, test2)
{
	int arg;

	arg = parse_array("");
	cr_expect(arg == 0, "ERROR_FAIL");
}

Test(parse_array_test, test3)
{
	int arg;
	
	arg = parse_array("wd");
	cr_expect(arg == 1, "ERROR_FAIL");
}

Test(parse_array_test, test4)
{
	int arg;
	
	arg = parse_array("wd    ");
	cr_expect(arg == 1, "ERROR_FAIL");
}

Test(parse_array_test, test5)
{
	int arg;
	
	arg = parse_array("   wd");
	cr_expect(arg == 1, "ERROR_FAIL");
}

Test(parse_array_test, test6)
{
	int arg;
	
	arg = parse_array("wd sdhj sdsd");
	cr_expect(arg == 3, "ERROR_FAIL");
}

Test(parse_array_test, test7)
{
	int arg;
	
	arg = parse_array("   wd  	wdwd		wd     ");
	cr_expect(arg == 3, "ERROR_FAIL");
}

Test(parse_array_test, test8)
{
	int arg;
	
	arg = parse_array("wd  wdwdwd	dwd 	");
	cr_expect(arg == 3, "ERROR_FAIL");
}

Test(parse_array_test, test9)
{
	int arg;
	
	arg = parse_array("wd wd w d wd dw dwd d wdd d wd d dwd  dwd d wdw wd w");
	cr_expect(arg == 18, "ERROR_FAIL");
}

Test(ft_split_whitespace_test, test1)
{
	char	**array;

	array = ft_split_whitespace("Ceci est un test.");
	cr_expect_str_eq(array[0], "Ceci", RED "? FAILURE ? array[0] =/= Ceci" DEFAULT);
	cr_expect_str_eq(array[1], "est", RED "? FAILURE ? array[0] =/= est" DEFAULT);
	cr_expect_str_eq(array[2], "un", RED "? FAILURE ? array[0] =/= un" DEFAULT);
	cr_expect_str_eq(array[3], "test.", RED "? FAILURE ? array[0] =/= test" DEFAULT);
}

Test(ft_split_whitespace_test, test2)
{
	char **array;

	array = ft_split_whitespace("");
	cr_expect(array == NULL, "ERROR_FAILURE, should have been set to NULL");
}

Test(ft_split_whitespace_test, test3)
{
	char **array;

	array = ft_split_whitespace("                         ");
	cr_expect(array == NULL, "ERROR_FAILURE, should have been set to NULL");
}

Test(ft_split_whitespace_test, test4)
{
	char **array;

	array = ft_split_whitespace("		          Ceci              est un 														test.                        ");
	cr_expect_str_eq(array[0], "Ceci", RED "? FAILURE ? array[0] =/= Ceci" DEFAULT);
	cr_expect_str_eq(array[1], "est", RED "? FAILURE ? array[0] =/= est" DEFAULT);
	cr_expect_str_eq(array[2], "un", RED "? FAILURE ? array[0] =/= un" DEFAULT);
	cr_expect_str_eq(array[3], "test.", RED "? FAILURE ? array[0] =/= test" DEFAULT);
}

Test(empty_list, test1)
{
	char	**av;
	char	**array;
	size_t	len;

	len = 0;
	av = fill_array(len);

	array = argument_recovering(av, len);
	cr_expect(array == NULL, RED "ERROR_FAIL array is not set to NULL" DEFAULT);
}

Test(single_argument, test1)
{
	char	**array;
	char	**av;
	size_t	len;

	len = 1;
	av = fill_array(len, "+10");
	array = argument_recovering(av, len);
	cr_expect_str_eq(array[0], "+10", RED "ERROR_FAILURE '+10'" DEFAULT);
	free_array(array);
	free_array(av);
}

Test(single_argument, test2)
{
	char	**array;
	char	**av;
	size_t	len;

	len = 1;
	av = fill_array(len, "10");
	array = argument_recovering(av, len);
	cr_expect_str_eq(array[0], "10", RED "ERROR_FAILURE '10'" DEFAULT);
	free_array(array);
	free_array(av);
}

Test(single_argument, test3)
{
	char	**array;
	char	**av;
	size_t	len;

	len = 1;
	av = fill_array(len, "-10");
	array = argument_recovering(av, len);
	cr_expect_str_eq(array[0], "-10", RED "ERROR_FAILURE '-10'" DEFAULT);
	free_array(array);
	free_array(av);
}

Test(single_argument, test4)
{
	char	**array;
	char	**av;
	size_t	len;

	len = 1;
	av = fill_array(len, "#1");
	array = argument_recovering(av, len);
	cr_expect_str_eq(array[0], "#1", RED "ERROR_FAILURE '#1'" DEFAULT);
	free_array(array);
	free_array(av);
}

Test(single_argument, test5)
{
	char	**array;
	char	**av;
	size_t	len;

	len = 1;
	av = fill_array(len, "10#");
	array = argument_recovering(av, len);
	cr_expect_str_eq(array[0], "10#", RED "ERROR_FAILURE '10#'" DEFAULT);
	free_array(array);
	free_array(av);
}

Test(single_argument, test6)
{
	char	**array;
	char	**av;
	size_t	len;

	len = 1;
	av = fill_array(len, "10 + 10");
	array = argument_recovering(av, len);
	cr_expect_str_eq(array[0], "10", RED "ERROR_FAILURE '10 + 10'" DEFAULT);
	cr_expect_str_eq(array[1], "+", RED "ERROR_FAILURE '+'" DEFAULT);
	cr_expect_str_eq(array[2], "10", RED "ERROR_FAILURE '10'" DEFAULT);
	free_array(array);
	free_array(av);
}

Test(single_argument, test7)
{
	char	**array;
	char	**av;
	size_t	len;

	len = 1;
	av = fill_array(len, "Ceci est un test");
	array = argument_recovering(av, len);
	cr_expect_str_eq(array[0], "Ceci", RED "ERROR_FAILURE 'Ceci est un test'" DEFAULT);
	cr_expect_str_eq(array[1], "est", RED "ERROR_FAILURE 'Ceci est un test'" DEFAULT);
	cr_expect_str_eq(array[2], "un", RED "ERROR_FAILURE 'Ceci est un test'" DEFAULT);
	cr_expect_str_eq(array[3], "test", RED "ERROR_FAILURE 'Ceci est un test'" DEFAULT);
	free_array(array);
	free_array(av);
}

Test(single_argument, test8)
{
	char	**array;
	char	**av;
	size_t	len;

	len = 1;
	av = fill_array(len, "                      ");
	array = argument_recovering(av, len);
	cr_expect(array == NULL, "ERROR_FAILURE, should have been set to NULL");
	free_array(array);
	free_array(av);
}

Test(double_argument, test1)
{
	char	**array;
	char	**av;
	size_t	len;

	len = 2;
	av = fill_array(len, "-a", "10 + 10");
	array = argument_recovering(av, len);
	cr_expect_str_eq(array[0], "10 + 10", RED "ERROR_FAILURE '10 + 10'" DEFAULT);
	free_array(av);
}

Test(double_argument, test2)
{
	char	**array;
	char	**av;
	size_t	len;

	len = 2;
	av = fill_array(len, "-a", "Ceci est un test");
	array = argument_recovering(av, len);
	cr_expect_str_eq(array[0], "Ceci est un test", RED "ERROR_FAILURE 'Ceci est un test'" DEFAULT);
	free_array(av);
}

Test(double_argument, test3)
{
	char	**array;
	char	**av;
	size_t	len;

	len = 2;
	av = fill_array(len, "           Ceci          ", "est    ");
	array = argument_recovering(av, len);
	cr_expect_str_eq(array[0], "Ceci", RED "ERROR_FAILURE 'Ceci est'" DEFAULT);
	cr_expect_str_eq(array[1], "est", RED "ERROR_FAILURE 'Ceci est'" DEFAULT);
	free_array(array);
	free_array(av);
}

Test(triple_argument, test1)
{
	char	**array;
	char	**av;
	size_t	len;
	
	len = 3;
	av = fill_array(len, "10+10   -4", "-79d", "9 +9");
	array = argument_recovering(av, len);
	cr_expect_str_eq(array[0], "10+10", RED "ERROR_FAILURE '10+10'" DEFAULT);
	cr_expect_str_eq(array[1], "-4", RED "ERROR_FAILURE '-4'" DEFAULT);
	cr_expect_str_eq(array[2], "-79d", RED "ERROR_FAILURE '-79d'" DEFAULT);
	cr_expect_str_eq(array[3], "9", RED "ERROR_FAILURE '9'" DEFAULT);
	cr_expect_str_eq(array[4], "+9", RED "ERROR_FAILURE '+9'" DEFAULT);

	free_array(array);
	free_array(av);
}

Test(multiple_argument, test1)
{
	char	**array;
	char	**av;
	size_t	len;
	
	len = 19;
	av = fill_array(len, "-1", "yolo", "k", "l", "v", "d", "l", "v", "d", "i", "ljsdiljsdflds", "jidsjviosdjvkls", "djvklsdvj", "klsvslkvsd;k", "vjsd;lv", "jsdo;vjs", "d;lvjsdv;lj", "sdv;osdjv;osdkv", ";osdjvo;sdjv;sdmv;ldsjvopd");
	array = argument_recovering(av, len);
	cr_expect_str_eq(array[0], "-1", RED "ERROR_FAILURE '-1'" DEFAULT);
	cr_expect_str_eq(array[1], "yolo", RED "ERROR_FAILURE 'yolo'" DEFAULT);
	cr_expect_str_eq(array[2], "k", RED "ERROR_FAILURE 'k'" DEFAULT);
	cr_expect_str_eq(array[3], "l", RED "ERROR_FAILURE 'l'" DEFAULT);
	cr_expect_str_eq(array[4], "v", RED "ERROR_FAILURE 'v'" DEFAULT);
	cr_expect_str_eq(array[5], "d", RED "ERROR_FAILURE 'd'" DEFAULT);
	cr_expect_str_eq(array[6], "l", RED "ERROR_FAILURE 'l'" DEFAULT);
	cr_expect_str_eq(array[7], "v", RED "ERROR_FAILURE 'v'" DEFAULT);
	cr_expect_str_eq(array[8], "d", RED "ERROR_FAILURE 'd'" DEFAULT);
	cr_expect_str_eq(array[9], "i", RED "ERROR_FAILURE 'i'" DEFAULT);
	cr_expect_str_eq(array[10], "ljsdiljsdflds", RED "ERROR_FAILURE 'ljsdiljsdflds'" DEFAULT);
	cr_expect_str_eq(array[11], "jidsjviosdjvkls", RED "ERROR_FAILURE 'jidsjviosdjvkls'" DEFAULT);
	cr_expect_str_eq(array[12], "djvklsdvj", RED "ERROR_FAILURE 'djvklsdvj'" DEFAULT);
	cr_expect_str_eq(array[13], "klsvslkvsd;k", RED "ERROR_FAILURE 'klsvslkvsd;k'" DEFAULT);
	cr_expect_str_eq(array[14], "vjsd;lv", RED "ERROR_FAILURE 'vjsd;lv'" DEFAULT);
	cr_expect_str_eq(array[15], "jsdo;vjs", RED "ERROR_FAILURE 'jsdo;vjs'" DEFAULT);
	cr_expect_str_eq(array[16], "d;lvjsdv;lj", RED "ERROR_FAILURE 'd;lvjsdv;lj'" DEFAULT);
	cr_expect_str_eq(array[17], "sdv;osdjv;osdkv", RED "ERROR_FAILURE 'sdv;osdjv;osdkv'" DEFAULT);
	cr_expect_str_eq(array[18], ";osdjvo;sdjv;sdmv;ldsjvopd", RED "ERROR_FAILURE ';osdjvo;sdjv;sdmv;ldsjvopd'" DEFAULT);

	free_array(array);
	free_array(av);
}
