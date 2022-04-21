/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   XX_test_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:06:53 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 17:53:52 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	X_test_ft(void)
{
	int	ret;

	ret = ft_printf(" %X ", 0); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X", -1); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", 1); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", 9); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", 10); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", 11); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", 15); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", 16); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", 17); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", 99); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", 100); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", 101); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", -9); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", -10); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", -11); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", -14); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", -15); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", -16); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", -99); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", -100); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", -101); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", INT_MAX); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %X ", INT_MIN); ft_printf(" ret : %d\n", ret);
}
