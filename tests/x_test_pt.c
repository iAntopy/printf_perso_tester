/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_test_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:02:22 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 18:03:52 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	x_test_pt(void)
{
	int	ret;

	ret = printf(" %x ", 0); printf(" ret : %d\n", ret);
	ret = printf(" %x", -1); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 1); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 9); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 10); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 11); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 15); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 16); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 17); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 99); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 100); printf(" ret : %d\n", ret);
	ret = printf(" %x ", 101); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -9); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -10); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -11); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -14); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -15); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -16); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -99); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -100); printf(" ret : %d\n", ret);
	ret = printf(" %x ", -101); printf(" ret : %d\n", ret);
	ret = printf(" %x ", INT_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %x ", INT_MIN); printf(" ret : %d\n", ret);
}
