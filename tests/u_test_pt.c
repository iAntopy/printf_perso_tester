/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_test_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:15:21 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 17:52:55 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	u_test_pt(void)
{
	int ret;

	ret = printf(" %u ", 0); printf(" ret : %d\n", ret);
	ret = printf(" %u", -1); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 1); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 9); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 10); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 11); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 15); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 16); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 17); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 99); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 100); printf(" ret : %d\n", ret);
	ret = printf(" %u ", 101); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -9); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -10); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -11); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -14); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -15); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -16); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -99); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -100); printf(" ret : %d\n", ret);
	ret = printf(" %u ", -101); printf(" ret : %d\n", ret);
	ret = printf(" %u ", INT_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %u ", INT_MIN); printf(" ret : %d\n", ret);
}
