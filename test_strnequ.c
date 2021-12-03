#include "test_libft.h"

void	test_strnequ(void)
{
	t_test	*test = new_test();

	print_function("FT_STRNEQU");

	evaluate(test);
	free(test);
}
