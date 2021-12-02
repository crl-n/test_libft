#ifndef TEST_LIBFT_H
# define TEST_LIBFT_H

# include <assert.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>
# include <ctype.h>
# include "libft.h"

# define INT_MIN "-2147483648"
# define INT_MAX "2147483647"
# define RED   "\x1B[31m"
# define GRN   "\x1B[32m"
# define YEL   "\x1B[33m"
# define BLU   "\x1B[34m"
# define MAG   "\x1B[35m"
# define CYN   "\x1B[36m"
# define WHT   "\x1B[37m"
# define RESET "\x1B[0m"

// Test struct
typedef struct s_test
{
	size_t	target;
	size_t	passed;
}	t_test;

// First part
void	test_bzero(void);
void	test_memset(void);
void	test_memcpy(void);
void	test_memccpy(void);
void	test_memmove(void);
void	test_memchr(void);
void	test_memcmp(void);
void	test_strdup(void);
void	test_strcpy(void);
void	test_strncpy(void);
void	test_strcat(void);
void	test_strncat(void);
void	test_strlcat(void);
void	test_strchr(void);
void	test_strrchr(void);
void	test_strlen(void);
void	test_strstr(void);
void	test_strnstr(void);
void	test_strcmp(void);
void	test_strncmp(void);
void	test_atoi(void);
void	test_isalpha(void);
void	test_isdigit(void);
void	test_isalnum(void);
void	test_isascii(void);
void	test_isprint(void);
void	test_tolower(void);
void	test_toupper(void);

// Second part
void	test_strnew(void);
void	test_strsub(void);
void	test_strjoin(void);
void	test_itoa(void);
void	test_strtrim(void);
void	test_strsplit(void);
void	test_putnbr(void);

// Bonus part
void	test_lstnew(void);
void	test_lstdelone(void);
void	test_lstdel(void);
void	test_lstadd(void);
void	test_lstiter(void);
void	test_lstmap(void);

// 5 extra functions
void	test_lstsize(void);
void	test_lstadd_back(void);
void	test_lstget(void);
void	test_lstpop(void);
void	test_lstpop_left(void);
//void	test_lstrev(void);

// Test functions
void	test_int(int expected, int actual, char *test_name);
int		test_integer(int expected, int actual, t_test *test);
void	test_size_t(size_t expected, size_t actual, char *test_name);
void	test_size(size_t expected, size_t actual, t_test *test);
void	test_str(char *expected, char *actual, char *test_name);
int		test_string(char *expected, char *actual, t_test *test);
void	test_mem(void *expected, void *actual, char *test_name);
int		test_memory(void *expected, void *actual, t_test *test);
int		test_address(void *expected, void *actual, t_test *test);
void	test_adr(void *expected, void *actual, char *test_name);
void	test_diff_adr(void *expected, void *actual, char *test_name);
void	test_str_arr(char **expected, char **actual, size_t len, char *test_name);
void	test_lst(t_list *expected, t_list *actual, t_test *test);

// Other functions
void	free_list(t_list **head);
t_test	*new_test(void);
void	evaluate(t_test *test);

// Print functions
void	print_banner(void);
void	print_part_one(void);
void	print_additional(void);
void	print_bonus(void);
void	print_ft(char *ft_name);
void	print_function(char *ft_name);
void	print_failed(char *test_name);
void	print_fail(void);
void	print_passed(char *test_name);
void	print_pass(void);
void	print_str_arr(char **arr);

#endif
