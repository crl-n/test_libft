#include "test_libft.h"

void	test_itoa_base(void)
{
	t_test	*test = new_test();
	char	*s1 = NULL;

	print_function("FT_ITOA_BASE");

	s1 = ft_itoa_base(-2147483648, 10);
	test_string("-2147483648", s1, test);
	ft_strdel(&s1);

	s1 = ft_itoa_base(0, 10);
	test_string("0", s1, test);
	ft_strdel(&s1);

	s1 = ft_itoa_base(2147483647, 8);
	if (!test_string("17777777777", s1, test))
		printf("0x7fffffff, 8: %s\n", s1);
	ft_strdel(&s1);

	evaluate(test);
	free(test);
}
