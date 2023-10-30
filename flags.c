/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:05:49 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/30 15:50:03 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	repartflag(const char c, va_list lst)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = nbr_count(va_arg(lst, int));				// ok
	else if (c == 'x')
		count = nbr_hexa(va_arg(lst, int), 0);				// ok juste verif si c'est int
	else if (c == 'X')
		count = nbr_hexa(va_arg(lst, int), 1);				// ok juste verif si c'est int
	else if (c == 'c')
		count = ft_putchar(va_arg(lst, int));				// ok
	else if (c == 's')
		count = ft_putstr(va_arg(lst, char *));				// ok
	return (count);
}