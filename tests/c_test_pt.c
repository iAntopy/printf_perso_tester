/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_test_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:17:44 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 20:11:17 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	c_test_pt(void)
{
	int	ret;

	ret = printf(" %c ", ' '); printf(" ret : %d\n", ret);
	ret = printf(" %c ", 'a'); printf(" ret : %d\n", ret);
	ret = printf(" %c, %c %c%c", 'b', 'c', '\t', '\n'); printf(" ret : %d\n", ret);
	ret = printf(" Is the sky blue %c/%c? %c", 'y', 'n', '@'); printf(" ret : %d\n", ret);
	ret = printf("%c%c%c%c%c%c%c%c%c%c%c %c%c", 'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\n'); printf(" ret : %d\n", ret);
	printf("Extra wide %c%c%c%c !", 'l', 'o', 'a', 'd', 'e','x', 't', 'r', 'a');
}
