#!/bin/zsh

function adt() {
	# Add new test_file to Makefile
	if ! grep -q 'test_'$1'.c' Makefile
	then
		sed -i'' -e '/SRCS = main.c/a\
			\	\ \ \ test_'$1'.c \\\
		' Makefile
		echo '✓ test_'$1'.c added to Makefile'
	else
		echo '𝙭 test_'$1'.c already in Makefile!'
	fi

	# Add libft src file to Makefile
	if ! grep -q 'ft_'$1'.c' Makefile
	then
		sed -i'' -e '/LIBSRCS =/a\
			\	\	\ \ ../libft/ft_'$1'.c \\\
		' Makefile
		echo '✓ ft_'$1'.c added to Makefile'
	else
		echo '𝙭 ft_'$1'.c already in Makefile!'
	fi

	# Create test .c file
	FNAME=$(echo 'test_'$1'.c')
	UPPER=$(echo 'FT_'$1 | tr a-z A-Z)
	if ! test -f $FNAME
	then
		touch $FNAME
		#echo ':Stdheader | w' | vim -e
		echo '#include "test_libft.h"

void	test_'$1'(void)
{
	t_test	*test = new_test();

	print_function("'$UPPER'");

	evaluate(test);
	free(test);
}' >> $FNAME
		echo '✓ test_'$1'.c created'
	else
		echo '𝙭 test_'$1'.c already exists!'
	fi
}
