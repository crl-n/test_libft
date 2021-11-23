#include "libft.h"
#include <stdio.h>
#include <string.h>

void	del(void *str, size_t size)
{
	free(str);
	size = size + 1;
}

void	put(t_list *elem)
{
	printf("%s\n", elem->content);
}

t_list	*add21(t_list *node)
{
	(void) node;
	return ft_lstnew(strdup("21"), 3);
}
	
int	main(void)
{
	char *str;
	
	str = (char *) malloc(4 * sizeof (char));
	if (!str)
		return 0;
	str[0] = '4';
	str[1] = '2';
	str[2] = '\0';
	
	t_list	*node = ft_lstnew(str, 1);
	printf("%s\n", (char *)node->content);
	
	// Add empty node to form a list
	t_list	*node2 = ft_lstnew(strdup(str), 1);
	node->next = node2;

	// Test lstmap
	t_list *new = ft_lstmap(node, add21);
	ft_lstiter(new, put);
	// ft_lstdel(&node, del);
	// printf("%p\n", node);

	return (0);
}
