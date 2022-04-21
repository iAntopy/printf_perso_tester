/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_test_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:17:44 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 16:44:11 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	d_test_pt(void)
{
	int	ret;

	ret = printf(" %d ", 0); printf(" ret : %d\n", ret);
	ret = printf(" %d", -1); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 1); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 9); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 10); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 11); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 15); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 16); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 17); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 99); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 100); printf(" ret : %d\n", ret);
	ret = printf(" %d ", 101); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -9); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -10); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -11); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -14); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -15); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -16); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -99); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -100); printf(" ret : %d\n", ret);
	ret = printf(" %d ", -101); printf(" ret : %d\n", ret);
	ret = printf(" %d ", INT_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %d ", INT_MIN); printf(" ret : %d\n", ret);
}
