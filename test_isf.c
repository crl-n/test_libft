/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:37:18 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/05 16:00:30 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <ctype.h>

int	main(void)
{
	int c;

	/* Tests for ft_isalpha */
	c = 0;
	while (c < 127)
	{
		assert(ft_isalpha(c) == isdigit(c));
		c++;
	}

	/* Tests for ft_isdigit */
	c = 0;
	while (c < 127)
	{
		assert(ft_isdigit(c) == isdigit(c));
		c++;
	}

		/* Tests for ft_isalnum */
	c = 0;
	while (c < 127)
	{
		assert(ft_isalnum(c) == isalnum(c));
		c++;
	}

	/* Tests for ft_isascii */
	c = 0;
	while (c < 300)
	{
		assert(ft_isascii(c) == isascii(c));
		c++;
	}

	/* Tests for ft_isprint */
	c = 0;
	while (c < 127)
	{
		assert(ft_isprint(c) == isprint(c));
		c++;
	}

	return (0);
}
