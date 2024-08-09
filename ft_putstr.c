/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmo-lo <polmo-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:08:18 by polmo-lo          #+#    #+#             */
/*   Updated: 2024/08/09 14:37:05 by polmo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	return (write(1, str, len));
}
