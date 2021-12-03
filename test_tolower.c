#include "test_libft.h"

void	test_tolower(void)
{
	t_test	*test = new_test();

	print_function("FT_TOLOWER");

	evaluate(test);
	free(test);
}
