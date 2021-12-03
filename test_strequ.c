#include "test_libft.h"

void	test_strequ(void)
{
	t_test	*test = new_test();

	print_function("FT_STREQU");

	evaluate(test);
	free(test);
}
