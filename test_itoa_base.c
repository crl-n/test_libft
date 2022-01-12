#include "test_libft.h"

void	test_itoa_base(void)
{
	t_test	*test = new_test();

	print_function("FT_ITOA_BASE");

	evaluate(test);
	free(test);
}
