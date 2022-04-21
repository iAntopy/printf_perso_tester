/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_tester.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:34 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/20 20:23:14 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_TESTER_H
# define PRINTF_TESTER_H

# include <stdio.h>
# include <limits.h>
# include "../../ft_printf.h"

# define BLACK_C	"\033[0;30m"
# define RED_C		"\033[0;31m"
# define GREEN_C	"\033[0;32m"
# define YELLOW_C	"\033[0;33m"
# define BLUE_C		"\033[0;34m"
# define PURPLE_C	"\033[0;35m"
# define CYAN_C		"\033[0;36m"
# define WHITE_C	"\033[0;37m"

# define BLACK_BC	"\033[1;30m"
# define RED_BC		"\033[1;31m"
# define GREEN_BC	"\033[1;32m"
# define YELLOW_BC	"\033[1;33m"
# define BLUE_BC	"\033[1;34m"
# define PURPLE_BC	"\033[1;35m"
# define CYAN_BC	"\033[1;36m"
# define WHITE_BC	"\033[1;37m"

void	d_test_ft(void);
void	d_test_pt(void);
void	i_test_ft(void);
void	i_test_pt(void);
void	c_test_ft(void);
void	c_test_pt(void);
void	s_test_ft(void);
void	s_test_pt(void);
void	u_test_ft(void);
void	u_test_pt(void);
void	x_test_ft(void);
void	x_test_pt(void);
void	X_test_ft(void);
void	X_test_pt(void);
void	p_test_ft(void);
void	p_test_pt(void);
void	pct_test_ft(void);
void	pct_test_pt(void);

#endif
