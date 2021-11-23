#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	**r;
	r = ft_strsplit(" a b d s f ", ' ');
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", r[i]);
	}
	return (0);
}
