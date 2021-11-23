#ifndef TEST_LIBFT_H
# define TEST_LIBFT_H

# include <assert.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>
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

// First part
void	test_memset(void);
void	test_memcpy(void);
void	test_memccpy(void);
void	test_strdup(void);
void	test_strcpy(void);
void	test_strncpy(void);
void	test_strcat(void);
void	test_strncat(void);
void	test_strlcat(void);
void	test_strstr(void);
void	test_strnstr(void);
void	test_strcmp(void);
void	test_atoi(void);

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
void	test_size_t(size_t expected, size_t actual, char *test_name);
void	test_size(size_t expected, size_t actual, size_t *passed);
void	test_str(char *expected, char *actual, char *test_name);
void	test_mem(void *expected, void *actual, char *test_name);
void	test_adr(void *expected, void *actual, char *test_name);
void	test_diff_adr(void *expected, void *actual, char *test_name);
void	test_str_arr(char **expected, char **actual, size_t len, char *test_name);
void	test_lst(t_list *expected, t_list *actual, size_t *passed);

// Other functions
void	evaluate(size_t target, size_t passed);

// Print functions
void	print_banner(void);
void	print_ft(char *ft_name);
void	print_function(char *ft_name);
void	print_failed(char *test_name);
void	print_fail(void);
void	print_passed(char *test_name);
void	print_pass(void);
void	print_str_arr(char **arr);

#endif
