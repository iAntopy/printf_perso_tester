/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   XX_test_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:06:53 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 17:53:42 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	X_test_pt(void)
{
	int	ret;

	ret = printf(" %X ", 0); printf(" ret : %d\n", ret);
	ret = printf(" %X", -1); printf(" ret : %d\n", ret);
	ret = printf(" %X ", 1); printf(" ret : %d\n", ret);
	ret = printf(" %X ", 9); printf(" ret : %d\n", ret);
	ret = printf(" %X ", 10); printf(" ret : %d\n", ret);
	ret = printf(" %X ", 11); printf(" ret : %d\n", ret);
	ret = printf(" %X ", 15); printf(" ret : %d\n", ret);
	ret = printf(" %X ", 16); printf(" ret : %d\n", ret);
	ret = printf(" %X ", 17); printf(" ret : %d\n", ret);
	ret = printf(" %X ", 99); printf(" ret : %d\n", ret);
	ret = printf(" %X ", 100); printf(" ret : %d\n", ret);
	ret = printf(" %X ", 101); printf(" ret : %d\n", ret);
	ret = printf(" %X ", -9); printf(" ret : %d\n", ret);
	ret = printf(" %X ", -10); printf(" ret : %d\n", ret);
	ret = printf(" %X ", -11); printf(" ret : %d\n", ret);
	ret = printf(" %X ", -14); printf(" ret : %d\n", ret);
	ret = printf(" %X ", -15); printf(" ret : %d\n", ret);
	ret = printf(" %X ", -16); printf(" ret : %d\n", ret);
	ret = printf(" %X ", -99); printf(" ret : %d\n", ret);
	ret = printf(" %X ", -100); printf(" ret : %d\n", ret);
	ret = printf(" %X ", -101); printf(" ret : %d\n", ret);
	ret = printf(" %X ", INT_MAX); printf(" ret : %d\n", ret);
	ret = printf(" %X ", INT_MIN); printf(" ret : %d\n", ret);
}
