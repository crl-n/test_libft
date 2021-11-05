#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1[] = "abc";

	printf("%lu\t%zu\n", ft_strlen(s1), strlen(s1));
	return (0);
}
