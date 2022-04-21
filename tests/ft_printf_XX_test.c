/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:35:08 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 20:29:58 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

int	main(void)
{
	printf(GREEN_BC" ---------- TEST ft_printf X -------- "GREEN_C"\n");
	X_test_ft();
	printf(CYAN_BC" ---------- TEST printf X -------- "CYAN_C"\n");
	X_test_pt();
	printf(WHITE_C);
	return (0);
}
