/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_test_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:02:22 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 17:53:19 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	x_test_ft(void)
{
	int ret;

	ret = ft_printf(" %x ", 0); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x", -1); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 1); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 9); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 10); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 11); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 15); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 16); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 17); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 99); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 100); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", 101); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -9); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -10); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -11); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -14); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -15); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -16); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -99); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -100); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", -101); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", INT_MAX); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %x ", INT_MIN); ft_printf(" ret : %d\n", ret);
}
