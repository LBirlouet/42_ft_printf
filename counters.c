/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counters.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:56:13 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/30 17:11:46 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nbr_hexa(int n, int i)
{
	int	count;
	int	tempo;

	count = 0;
	tempo = n;
	while (tempo > 0)
	{
		tempo = tempo / 16;
		count++;
	}
	if (i == 0)
		ft_putnbr_hexalower(n);
	if (i == 1)
		ft_putnbr_hexatoupper(n);
	return (count);
}


int nbr_count(int n)
{
	int	count;
	int	tempo;

	count = 0;
	tempo = n;
	while (tempo > 0)
	{
		count ++;
		tempo = tempo / 10; 
	}
	ft_putnbr(n);
	return (count);
}

int nbr_count_unsigned(unsigned int n)
{
	int	count;
	unsigned int	tempo;

	count = 0;
	tempo = n;
	while (tempo > 0)
	{
		count ++;
		tempo = tempo / 10; 
	}
	ft_putnbr_unsigned(n);
	return (count);
}

int nbr_count_p(void const *p)
{
    int count;
    unsigned long n;
    unsigned long tempo;

    count = 0;
    n = (unsigned long) p;
    count = 0;
	tempo = n;
    if (tempo > 0)
    {
	    while (tempo > 0)
	    {
	    	tempo = tempo / 16; 
	    	count ++;
	    }
    }
    else if (tempo == 0)
        count = 1;
    count += ft_putstr("0x");
    ft_putnbr_adress(n);
    return (count);
}