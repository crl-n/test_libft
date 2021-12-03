#include "test_libft.h"

void	test_strequ(void)
{
	t_test	*test = new_test();

	print_function("FT_STREQU");

	test_integer(0, ft_strequ("AAA", "AAB"), test);
	test_integer(1, ft_strequ("AAA", "AAA"), test);

	evaluate(test);
	free(test);
}
