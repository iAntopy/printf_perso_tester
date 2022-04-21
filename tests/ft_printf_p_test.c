/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:53:12 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 20:33:49 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

int	main(void)
{
	ft_printf(GREEN_BC"----------- TEST ft_printf p -----------"GREEN_C"\n");
	p_test_ft();
	printf(CYAN_BC"----------- TEST printf p -----------"CYAN_C"\n");
	p_test_pt();
	printf(WHITE_C);
	return (0);
}
