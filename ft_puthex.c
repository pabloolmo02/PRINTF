/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmo-lo <polmo-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:13:56 by polmo-lo          #+#    #+#             */
/*   Updated: 2024/07/31 14:43:02 by polmo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nbr, char *base)
{
	int		nbr_base[16];
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (nbr == 0)
		result += ft_putchar('0');
	while (nbr)
	{
		nbr_base[i] = nbr % 16;
		nbr = nbr / 16;
		i++;
	}
	while (--i >= 0)
		result += ft_putchar(base[nbr_base[i]]);
	return (result);
}