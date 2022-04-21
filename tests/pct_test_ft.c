/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pct_test_ft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:20:02 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 17:52:33 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	pct_test_ft(void)
{
	int	ret;

	ret = ft_printf("%%"); ft_printf("ret : %d\n", ret);
	ret = ft_printf(" %% "); ft_printf("ret : %d\n", ret);
	ret = ft_printf("----%%----"); ft_printf("ret : %d\n", ret);
	ret = ft_printf("%%%%%%%p --", NULL); ft_printf("ret : %d\n", ret);
	ret = ft_printf("</zzzzzzzzzz%%%%\t%s\t%%%%zzzzzzzzzzz\\>", "testing one two"); ft_printf("ret : %d\n", ret);
}
