/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_test_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:17:44 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 19:31:05 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	i_test_ft(void)
{
	int	ret;

	ret = ft_printf(" %d ", 0); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d", -1); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 1); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 9); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 10); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 11); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 15); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 16); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 17); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 99); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 100); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", 101); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -9); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -10); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -11); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -14); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -15); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -16); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -99); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -100); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", -101); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", INT_MAX); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %d ", INT_MIN); ft_printf(" ret : %d\n", ret);
}
