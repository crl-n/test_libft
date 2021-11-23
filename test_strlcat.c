#include "libft.h"
#include <stdio.h>

void	test1(void)
{
	char	s[] = "abc\0def";
	char	d[50] = "xyz\0ijk";
	char	s2[] = "abc\0def";
	char	d2[50] = "xyz\0ijk";

	printf("\nTest 1\n");

	printf("ft_strlcat: %zu\n", ft_strlcat(d, s, 50));
	for (int i = 0; i < 50; i++)
		printf("%c", d[i]);
	printf("\n");

	printf("strlcat: %zu\n", strlcat(d2, s2, 50));
	for (int i = 0; i < 50; i++)
		printf("%c", d2[i]);
	printf("\n");
}

void	test2(void)
{
	char	s[] = "abcdef";
	char	d[50] = "xyz";
	char	s2[] = "abcdef";
	char	d2[50] = "xyz";

	printf("\nTest 2\n");

	printf("ft_strlcat: %zu\n", ft_strlcat(d, s, 50));
	for (int i = 0; i < 50; i++)
		printf("%c", d[i]);
	printf("\n");

	printf("strlcat: %zu\n", strlcat(d2, s2, 50));
	for (int i = 0; i < 50; i++)
		printf("%c", d2[i]);
	printf("\n");
}

int	main(void)
{
	test1();
	test2();
	return (0);
}
