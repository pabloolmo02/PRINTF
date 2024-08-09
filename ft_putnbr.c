/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmo-lo <polmo-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:20:14 by polmo-lo          #+#    #+#             */
/*   Updated: 2024/08/09 14:30:41 by polmo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	unsigned int	i;

	i = 0;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
		i++;
	}
	if (nbr > 9)
	{
		i += ft_putnbr(nbr / 10);
		i += ft_putchar(nbr);
	}
	else
	{
		i += ft_putchar (nbr + '0');
	}
	return (i);
}
