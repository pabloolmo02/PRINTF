/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmo-lo <polmo-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:10:27 by polmo-lo          #+#    #+#             */
/*   Updated: 2024/08/09 16:47:58 by polmo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
	}
	if (nbr > 9)
	{
		i += ft_putunsigned(nbr / 10);
		i += ft_putunsigned(nbr % 10);
	}
	else
	{
		i += ft_putchar (nbr + '0');
	}
	return (i);
}
