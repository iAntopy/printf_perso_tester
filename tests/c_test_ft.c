/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_test_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:17:44 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 20:10:14 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	c_test_ft(void)
{
	int	ret;

	ret = ft_printf(" %c ", ' '); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %c ", 'a'); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" %c, %c %c%c", 'b', 'c', '\t', '\n'); ft_printf(" ret : %d\n", ret);
	ret = ft_printf(" Is the sky blue %c/%c? %c", 'y', 'n', '@'); ft_printf(" ret : %d\n", ret);
	ret = ft_printf("%c%c%c%c%c%c%c%c%c%c%c %c%c", 'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\n'); ft_printf(" ret : %d\n", ret);
	ft_printf("Extra wide %c%c%c%c !", 'l', 'o', 'a', 'd', 'e','x', 't', 'r', 'a');
}
