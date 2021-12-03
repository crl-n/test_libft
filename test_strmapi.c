#include "test_libft.h"

void	test_strmapi(void)
{
	t_test	*test = new_test();

	print_function("FT_STRMAPI");

	evaluate(test);
	free(test);
}
