/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_test_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:11:05 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 17:54:04 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	p_test_ft(void)
{
	int	ret;

	ret = ft_printf(" %p ", (void *)(-1)); ft_printf("ret : %d\n", ret);
	ret = ft_printf(" %p ",  (void *)(1)); ft_printf("ret : %d\n", ret);
	ret = ft_printf(" %p ", (void *)15); ft_printf("ret : %d\n", ret);
	ret = ft_printf(" %p ", (void *)16); ft_printf("ret : %d\n", ret);
	ret = ft_printf(" %p ", (void *)17); ft_printf("ret : %d\n", ret);
	ret = ft_printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX); ft_printf("ret : %d\n", ret);
	ret = ft_printf(" %p %p ", (void *)INT_MIN, (void *)INT_MAX); ft_printf("ret : %d\n", ret);
	ret = ft_printf(" %p %p ", (void *)ULONG_MAX, (void *)(-ULONG_MAX)); ft_printf("ret : %d\n", ret);
	ret = ft_printf(" %p %p ", (void *)0, (void *)0); ft_printf("ret : %d\n", ret);
	ret = ft_printf(" %p %p ", NULL, NULL); ft_printf("ret : %d\n", ret);
}
