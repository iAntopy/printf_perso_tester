/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_test_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:15:21 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 17:53:05 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	u_test_ft(void)
{
	int	ret;

	ret = ft_printf(" %u ", 0); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u", -1); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 1); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 9); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 10); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 11); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 15); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 16); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 17); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 99); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 100); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", 101); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -9); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -10); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -11); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -14); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -15); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -16); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -99); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -100); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", -101); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", INT_MAX); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %u ", INT_MIN); ft_printf(" ret : %d\n", ret);
}
