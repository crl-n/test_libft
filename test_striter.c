#include "test_libft.h"

void	test_striter(void)
{
	t_test	*test = new_test();

	print_function("FT_STRITER");

	evaluate(test);
	free(test);
}
