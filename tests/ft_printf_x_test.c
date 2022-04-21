/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:35:08 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 20:29:45 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

int	main(void)
{
	ft_printf(GREEN_BC" ---------- TEST ft_printf x -------- "GREEN_C"\n");
	x_test_ft();
	printf(CYAN_BC" ---------- TEST printf x -------- "CYAN_C"\n");
	x_test_pt();
	printf(WHITE_C);
	return (0);
}
