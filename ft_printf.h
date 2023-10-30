/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:17:02 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/30 16:55:33 by lbirloue         ###   ########.fr       */
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
void	ft_putnbr_unsigned(unsigned int n);
void	ft_putnbr_adress(unsigned long n);
int 	nbr_count(int n);
int 	nbr_count_unsigned(unsigned int n);
int 	nbr_count_p(void const *p);
int		ft_putstr(char *str);
int		ft_putchar(char c);

#endif