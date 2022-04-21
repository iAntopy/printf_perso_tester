/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_test_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:56:50 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 18:05:56 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tester.h"

void	s_test_pt(void)
{
	char	sample[] = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut an    te blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
	int	ret;

	ret = printf("%s", ""); printf(" ret : %d\n", ret);
	ret = printf(" %s", ""); printf(" ret : %d\n", ret);
	ret = printf("%s ", ""); printf(" ret : %d\n", ret);
	ret = printf(" %s ", ""); printf(" ret : %d\n", ret);
	ret = printf(" %s ", "-"); printf(" ret : %d\n", ret);
	ret = printf(" %s %s ", "", "-"); printf(" ret : %d\n", ret);
	ret = printf(" %s %s ", " - ", ""); printf(" ret : %d\n", ret);
	ret = printf(" %s %s %s %s %s", " - ", "", "4", "", sample); printf(" ret : %d\n", ret);
	ret = printf(" %s %s %s %s %s", " - ", "", "4", "", "2 "); printf(" ret : %d\n", ret);
	ret = printf(" NULL %s NULL ", NULL); printf(" ret : %d\n", ret);
}
