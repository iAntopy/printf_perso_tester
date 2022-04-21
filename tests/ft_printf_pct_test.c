/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:53:12 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 20:30:06 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

int	main(void)
{
	ft_printf(GREEN_BC"----------- TEST ft_printf %% -----------"GREEN_C"\n");
	pct_test_ft();
	printf(CYAN_BC"----------- TEST printf %% -----------"CYAN_C"\n");
	pct_test_pt();
	printf(WHITE_C);
	return (0);
}
