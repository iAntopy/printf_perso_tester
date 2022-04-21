/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:35:08 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 20:30:18 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

int	main(void)
{
	ft_printf(GREEN_BC" ---------- TEST ft_printf c -------- "GREEN_C"\n");
	c_test_ft();
	printf(CYAN_BC" ---------- TEST printf c -------- "CYAN_C"\n");
	c_test_pt();
	printf(WHITE_C);
	return (0);
}
