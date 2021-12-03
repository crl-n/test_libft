#include "test_libft.h"

void	test_strmap(void)
{
	t_test	*test = new_test();

	print_function("FT_STRMAP");

	evaluate(test);
	free(test);
}
