/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:04:34 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/27 13:59:15 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf2(const char *str, va_list lst)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[j] != '"' && str[j] != 0)
		j++;
	j =+1;
	if (srt[j])
	{
		if ()
	}
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	lst;
	int		i;

	va_start(lst, str);
	i = ft_printf2(str, lst);
	va_end(lst);
	return (i);
}