#include "test_libft.h"

void	test_toupper(void)
{
	t_test	*test = new_test();

	print_function("FT_TOUPPER");

	evaluate(test);
	free(test);
}
