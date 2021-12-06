#include "test_libft.h"

void	test_strnequ(void)
{
	t_test	*test = new_test();

	print_function("FT_STRNEQU");

	test_integer(1, ft_strnequ("AAA", "AAB", 2), test);
	test_integer(0, ft_strnequ("AAA", "AAB", 3), test);
	test_integer(1, ft_strnequ("AAA", "AAA", 3), test);

	evaluate(test);
	free(test);
}
