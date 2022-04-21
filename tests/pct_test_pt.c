/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pct_test_ft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:20:02 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 17:52:16 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	pct_test_pt(void)
{
	int	ret;

	ret = printf("%%"); printf("ret : %d\n", ret);
	ret = printf(" %% "); printf("ret : %d\n", ret);
	ret = printf("----%%----"); printf("ret : %d\n", ret);
	ret = printf("%%%%%%%p --", NULL); printf("ret : %d\n", ret);
	ret = printf("</zzzzzzzzzz%%%%\t%s\t%%%%zzzzzzzzzzz\\>", "testing one two"); printf("ret : %d\n", ret);
}
