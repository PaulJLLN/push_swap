/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test_argument_conversion.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 13:08:05 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/20 15:25:17 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

Test(valid_single_test, test1)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 0;
	av = fill_array(len, NULL);
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(valid_single_test, test2)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 0;
	av = fill_array(len, "+10");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(valid_single_test, test3)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 0;
	av = fill_array(len, "");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(valid_single_test, test4)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "-10");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array[0] == -10, RED "/\\ TEST_FAIL /\\ array[0] =/= -10. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(valid_single_test, test5)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "10");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array[0] == 10, RED "/\\ TEST_FAIL /\\ array[0] =/= 10. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(valid_single_test, test6)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "0");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array[0] == 0, RED "/\\ TEST_FAIL /\\ array[0] =/= 0. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(valid_single_test, test7)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "+0");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array[0] == 0, RED "/\\ TEST_FAIL /\\ array[0] =/= 0. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(valid_single_test, test8)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "-0");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array[0] == 0, RED "/\\ TEST_FAIL /\\ array[0] =/= 0. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(valid_single_test, test9)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "2147483647");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array[0] == 2147483647, RED "/\\ TEST_FAIL /\\ array[0] =/= 2147483647. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(valid_single_test, test10)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "-2147483648");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array[0] == -2147483648, RED "/\\ TEST_FAIL /\\ array[0] =/= -2147483648. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(valid_single_test, test11)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "-2147483648 10");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array[0] == -2147483648, RED "/\\ TEST_FAIL /\\ array[0] =/= -2147483648. /\\ TEST_FAIL /\\" DEFAULT);
	cr_expect(n_array[1] == 10, RED "/\\ TEST_FAIL /\\ array[0] =/= -2147483648. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(valid_single_test, test12)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "-2147483648 +2147483647 0 10 89 -63 -987456321 +123456789");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array[0] == -2147483648, RED "/\\ TEST_FAIL /\\ array[0] =/= -2147483648. /\\ TEST_FAIL /\\" DEFAULT);
	cr_expect(n_array[1] == 2147483647, RED "/\\ TEST_FAIL /\\ array[1] =/= 2147483647. /\\ TEST_FAIL /\\" DEFAULT);
	cr_expect(n_array[2] == 0, RED "/\\ TEST_FAIL /\\ array[2] =/= 0. /\\ TEST_FAIL /\\" DEFAULT);
	cr_expect(n_array[3] == 10, RED "/\\ TEST_FAIL /\\ array[3] =/= 0. /\\ TEST_FAIL /\\" DEFAULT);
	cr_expect(n_array[4] == 89, RED "/\\ TEST_FAIL /\\ array[4] =/= 0. /\\ TEST_FAIL /\\" DEFAULT);
	cr_expect(n_array[5] == -63, RED "/\\ TEST_FAIL /\\ array[5] =/= 10. /\\ TEST_FAIL /\\" DEFAULT);
	cr_expect(n_array[6] == -987456321, RED "/\\ TEST_FAIL /\\ array[6] =/= -987456321. /\\ TEST_FAIL /\\" DEFAULT);
	cr_expect(n_array[7] == 123456789, RED "/\\ TEST_FAIL /\\ array[7] =/= 123456789. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test1)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "-2147483649");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test2)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "2147483648");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test3)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "2147d48364");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test4)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test5)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "2147483647d");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test6)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "++2147483647");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test7)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "--2147483647");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test8)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "-+2147483647");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test9)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "+-2147483647");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test10)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "+++-+-+-+-+-+-+-+-+--+-++-2147483647");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test11)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "2147483647 ++21");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test12)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "2147483647 +2147483647");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test13)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "2147483647 +-2147483647");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test14)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 1;
	av = fill_array(len, "2147483647 -+2147483647");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test15)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;

	len = 1;
	av = fill_array(len, "2147483647 wallah");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_single_test, test16)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;

	len = 1;
	av = fill_array(len, "2147483647 +0 0 -0 56");
	array = argument_recovering(av, len);
	array = argument_validity_checking(array, FALSE);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(valid_multiple_test, test1)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 2;
	av = fill_array(len, "10", "20");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array[0] == 10, RED "/\\ TEST_FAIL /\\ array[0] =/= 10. /\\ TEST_FAIL /\\" DEFAULT);
	cr_expect(n_array[1] == 20, RED "/\\ TEST_FAIL /\\ array[1] =/= 20. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(valid_multiple_test, test2)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 5;
	av = fill_array(len, "10", "20", "2147483647", "-2147483648", "0");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array[0] == 10, RED "/\\ TEST_FAIL /\\ array[0] =/= 10. /\\ TEST_FAIL /\\" DEFAULT);
	cr_expect(n_array[1] == 20, RED "/\\ TEST_FAIL /\\ array[1] =/= 20. /\\ TEST_FAIL /\\" DEFAULT);
	cr_expect(n_array[2] == 2147483647, RED "/\\ TEST_FAIL /\\ array[2] =/= 2147483647. /\\ TEST_FAIL /\\" DEFAULT);
	cr_expect(n_array[3] == -2147483648, RED "/\\ TEST_FAIL /\\ array[3] =/= -2147483648. /\\ TEST_FAIL /\\" DEFAULT);
	cr_expect(n_array[4] == 0, RED "/\\ TEST_FAIL /\\ array[4] =/= 0. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_multiple_test, test1)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 5;
	av = fill_array(len, "10", "20", "", "-2147483648", "0");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_multiple_test, test2)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 5;
	av = fill_array(len, "10", "20", "0", "-2147483648", "0");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_multiple_test, test3)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 5;
	av = fill_array(len, "10", "20", NULL , "-2147483648", "0");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_multiple_test, test4)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 5;
	av = fill_array(len, "10", "20", "2147483648", "-2147483648", "0");
	array = argument_recovering(av, len);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}

Test(invalid_multiple_test, test5)
{
	char	**array;
	char	**av;
	int		*n_array;
	size_t	len;
	

	len = 5;
	av = fill_array(len, "10", "20", "-2147483649", "-2147483648", "0");
	array = argument_recovering(av, len);
	print_array(array, len);
	n_array = argument_conversion(array);
	cr_expect(n_array == NULL, RED "/\\ TEST_FAIL /\\ array =/= NULL. /\\ TEST_FAIL /\\" DEFAULT);
}
