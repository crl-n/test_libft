#include "test_libft.h"
#include <fcntl.h>

void	test_putchar(void)
{
	t_test	*test = new_test();
	int		fd;
	int		saved_stdout;

	print_function("FT_PUTCHAR");

	// Redirect stdout
	if (redirect_stdout("putchar_output", &saved_stdout, &fd) < 0)
	{
		free(test);
		return ;
	}

	ft_putchar('a');
	ft_putchar('b');
	ft_putchar('c');
	ft_putchar('*');
	ft_putchar(' ');

	// Restore stdout
	restore_stdout(saved_stdout, fd);

	// Read output file
	char	*line = NULL;
	size_t	linecap = 0;
	FILE	*file = fopen("putchar_output", "r");
	if (file)
	{
		getline(&line, &linecap, file);
		fclose(file);
	}

	test_string("abc* ", line, test);

	evaluate(test);
	free(test);
	free(line);
}
