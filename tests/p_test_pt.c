/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_test_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:11:05 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 17:54:16 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	p_test_pt(void)
{
	int	ret;

	ret = printf(" %p ", (void *)(-1)); printf("ret : %d\n", ret);
	ret = printf(" %p ",  (void *)(1)); printf("ret : %d\n", ret);
	ret = printf(" %p ", (void *)15); printf("ret : %d\n", ret);
	ret = printf(" %p ", (void *)16); printf("ret : %d\n", ret);
	ret = printf(" %p ", (void *)17); printf("ret : %d\n", ret);
	ret = printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX); printf("ret : %d\n", ret);
	ret = printf(" %p %p ", (void *)INT_MIN, (void *)INT_MAX); printf("ret : %d\n", ret);
	ret = printf(" %p %p ", (void *)ULONG_MAX, (void *)(-ULONG_MAX)); printf("ret : %d\n", ret);
	ret = printf(" %p %p ", (void *)0, (void *)0); printf("ret : %d\n", ret);
	ret = printf(" %p %p ", NULL, NULL); printf("ret : %d\n", ret);
}
