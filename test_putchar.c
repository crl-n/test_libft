#include "test_libft.h"
#include <fcntl.h>

void	test_putchar(void)
{
	t_test	*test = new_test();
	int		fd;
	int		saved_stdout;

	print_function("FT_PUTCHAR");

	// Redirect stdout
	fd = open("putchar_output", O_RDWR | O_CREAT, 0777);
	if (fd < 0)
	{
		free(test);
		return ;
	}
	saved_stdout = dup(STDOUT_FILENO);
	dup2(fd, STDOUT_FILENO);

	ft_putchar('a');
	ft_putchar('b');
	ft_putchar('c');
	ft_putchar('*');
	ft_putchar(' ');

	// Restore stdout
	close(STDOUT_FILENO);
	dup2(saved_stdout, STDOUT_FILENO);
	close(fd);
	close(saved_stdout);

	evaluate(test);
	free(test);
}
