/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:04:34 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/30 17:14:16 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf2(const char *str, va_list lst)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
			{
				j += ft_putchar('%');
				i++;
			}
			else if (str[i + 1] != '%')
			{
				j += repartflag(str[i + 1], lst);
				i++;
			}
		}
		else
		{
			j += ft_putchar(str[i]);
		}
		i++;
	}
	return (j);
}

int	ft_printf(const char *str, ...)
{
	va_list	lst;
	int		i;

	if (!str)
		return (0);
	va_start(lst, str);
	i = ft_printf2(str, lst);
	va_end(lst);
	return (i);
}


// int main()
// {
// 	unsigned char const *s;


// 	int i = 1586422;
// 	int j = ft_printf("%d %i %u %X %x %s %c %p\n", 15, 25, 35, 45, 55, "oui", 's', NULL);
// 	printf("%d\n", j);

// 	printf("%d\n", printf("%d %i %u %X %x %s %c %p\n", 15, 25, 35, 45, 55, "oui", 's', NULL));

// }