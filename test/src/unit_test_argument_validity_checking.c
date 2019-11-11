/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test_argument_validity_checking.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:32:31 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/18 16:39:37 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

Test(no_option_one_argument_valid_test, Test1)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "+10");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG, RED "/\\ TEST_FAIL /\\ [[+10]] The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_valid_test, Test2)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;
	
	len = 1;
	av = fill_array(len, "10");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_valid_test, Test3)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "-10");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_valid_test, Test4)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "+20");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_valid_test, Test5)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "+0");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_valid_test, Test6)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "-20");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_valid_test, Test7)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "+42");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_valid_test, Test8)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "+4");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_valid_test, Test9)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "+2147483647");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_valid_test, Test10)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "2147483647");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_valid_test, Test11)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "-2147483648");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

// ##########################################################################################################
/*
Test(with_option_one_argument_valid_test, Test1)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "+10");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_valid_test, Test2)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "10");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_valid_test, Test3)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "-10");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_valid_test, Test4)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "+10 + (+10)");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_valid_test, Test5)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "+10 - (+10)");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_valid_test, Test6)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "+10 + (-10)");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_valid_test, Test7)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "-10 + (+10)");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_valid_test, Test8)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "-10 + (-10)");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_valid_test, Test9)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "-10 - (-10)");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_valid_test, Test10)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "7 * (12 - 6)");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_valid_test, Test11)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "((7 * (56 + 7 * 6 - (4 + 5 + 6 - 9))) + (2 * 56 - (46 / 6))) % 5");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_valid_test, Test12)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "+2147483647");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_valid_test, Test13)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "2147483647");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_valid_test, Test14)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "-2147483648");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/

// ##########################################################################################################

Test(no_option_one_argument_invalid_test, Test1)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "++10");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val == ERROR_PARSE_LONG, RED "/\\ TEST_FAIL /\\ The argument list is not supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_invalid_test, Test2)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "10+");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val == ERROR_PARSE_LONG, RED "/\\ TEST_FAIL /\\ The argument list is not supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_invalid_test, Test3)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "--10");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val == ERROR_PARSE_LONG, RED "/\\ TEST_FAIL /\\ The argument list is not supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_invalid_test, Test4)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "+-20");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val == ERROR_PARSE_LONG, RED "/\\ TEST_FAIL /\\ The argument list is not supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_invalid_test, Test5)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "-+0");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val == ERROR_PARSE_LONG, RED "/\\ TEST_FAIL /\\ The argument list is not supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_invalid_test, Test6)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "-w20");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val == ERROR_PARSE_LONG, RED "/\\ TEST_FAIL /\\ The argument list is not supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_invalid_test, Test7)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "w+42");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val == ERROR_PARSE_LONG, RED "/\\ TEST_FAIL /\\ The argument list is not supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_invalid_test, Test8)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "Ceci est un braquage");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val == ERROR_PARSE_LONG, RED "/\\ TEST_FAIL /\\ The argument list is not supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_invalid_test, Test9)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "+2147483648");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val == ERROR_PARSE_LONG, RED "/\\ TEST_FAIL /\\ The argument list is not supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_invalid_test, Test10)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "2147483648");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val == ERROR_PARSE_LONG, RED "/\\ TEST_FAIL /\\ The argument list is not supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_one_argument_invalid_test, Test11)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 1;
	av = fill_array(len, "-2147483649");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val == ERROR_PARSE_LONG, RED "/\\ TEST_FAIL /\\ The argument list is not supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

// ##########################################################################################################
/*
Test(with_option_one_argument_invalid_test, Test1)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "+d10");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test2)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "d10");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test3)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "-+10");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test4)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "+10 + +10");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test5)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "+10 - +10");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test6)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "+10 + ((-10)");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test7)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "-10 (+) +10");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test8)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "-10 + (-10) / 0");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test9)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "-10 - (-10) % 0");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test10)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "7 ** (12 - 6)");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test11)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "((7 * (56 ++ 7 * 6 - (4 + 5 + 6 - 9))) + (2 * 56 - (46 / 6))) % 5");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test12)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "+2147483648");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test13)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "2147483648");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test14)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "-2147483649");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test15)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "7 * (12 -- 6)");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test16)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "7 * (12 -+ 6)");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test17)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "7 * (12 +- 6)");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test18)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "7 * (12 - 6)+");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test19)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "7 ** (12 - 6)0");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/
/*
Test(with_option_one_argument_invalid_test, Test20)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 2;
	av = fill_array(len, "-a", "7 ** (12 - 6)568");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, TRUE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}
*/

// ##########################################################################################################

Test(no_option_multiple_argument_valid_test, Test1)
{
	char	**av;
	char	**array;
	size_t	len;
	long	val;

	len = 5;
	av = fill_array(len, "+10", "-568", "0", "2147483647", "-98547123");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_multiple_argument_valid_test, Test2)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 5;
	av = fill_array(len, "+10", "-568", "-0", "+2147483647", "-98547123");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_multiple_argument_valid_test, Test3)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 5;
	av = fill_array(len, "+10", "-568", "+0", "-2147483648", "-98547123");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_multiple_argument_valid_test, Test4)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 20;
	av = fill_array(len, "+10", "-20", "+30", "-40", "50", "+60", "-70", "+80", "-90", "100", "+110", "-120", "+130", "-140", "150", "+160", "-170", "+180", "-190", "200");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_multiple_argument_valid_test, Test5)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 5;
	av = fill_array(len, "+10", "-568", "0", "2147483647", "-98547123");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val != ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

// ####################################################################################

Test(no_option_multiple_argument_invalid_test, Test1)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 5;
	av = fill_array(len, "+10", "-568", "-0", "+2147483648", "-98547123");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

Test(no_option_multiple_argument_invalid_test, Test2)
{
	char	**array;
	char	**av;
	size_t	len;
	long	val;

	len = 5;
	av = fill_array(len, "+10", "-568", "", "-2147483648", "-2147483647");
	array = argument_recovering(av, len);
	val = argument_validity_checking(array, FALSE);
	cr_expect(val == ERROR_PARSE_LONG , RED "/\\ TEST_FAIL /\\ The argument list is supposed to be correct." DEFAULT);
	free_array(array);
	free_array(av);
}

