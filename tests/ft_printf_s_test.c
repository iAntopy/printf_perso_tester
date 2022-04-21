/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:35:08 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 20:29:36 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

int	main(void)
{
	ft_printf(GREEN_BC" ---------- TEST ft_printf str -------- "GREEN_C"\n");
	s_test_ft();
	printf(CYAN_BC" ---------- TEST printf str -------- "CYAN_C"\n");
	s_test_pt();
	printf(WHITE_C);
	return (0);
}
