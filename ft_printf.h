/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:17:02 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/30 14:44:01 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>



#include "stdio.h"




int		ft_printf(const char *str, ...);
int		ft_printf2(const char *str, va_list lst);
int		repartflag(const char c, va_list lst);
void	ft_putnbr(int n);
int 	nbr_hexa(int n, int i);
void    ft_putnbr_hexalower(int n);
void    ft_putnbr_hexatoupper(int n);
int 	nbr_count(int n);
int		ft_putstr(char *str);
int		ft_putchar(char c);

#endif