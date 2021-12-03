#include "test_libft.h"

void	test_memdel(void)
{
	t_test	*test = new_test();
	void	*m1 = malloc(5);

	print_function("FT_MEMDEL");

	ft_memdel(m1);
	test_address(NULL, m1, test);

	evaluate(test);
	free(test);
}
