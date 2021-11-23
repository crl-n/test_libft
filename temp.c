#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char	*str;

	str = (char *) malloc(4 * sizeof (char));
	if (!str)
		return (0);
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	printf("adr: %p, string: %s\n", str, str);
	memset(str, 42, 3);
	printf("adr: %p, string: %s\n", str, str);
	
	return (0);
}
