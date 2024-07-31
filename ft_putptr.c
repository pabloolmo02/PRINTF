/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmo-lo <polmo-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:40:48 by polmo-lo          #+#    #+#             */
/*   Updated: 2024/06/19 18:40:48 by polmo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_ptrlen(uintptr_t num)
{
    int i;

    i = 0;
    while (num != 0)
    {
        i++;
        num = num/16;
    }
    return (i);
}

void ft_putptrhex(uintptr_t num)
{
    if (num >= 16)
    {
        ft_putptrhex(num / 16);
        ft_putptrhex(num % 16);
    }
    else
    {
        if (num <= 9)
            ft_putchar_fd((num + '0'), 1);
        else
            ft_putchar_fd((num - 10 + 'a', 1));
    }
}

int ft_putptr(uintptr_t ptr)
{
    int i;
    if (ptr == 0)
    {
        ft_putstr("(nil)");
        return (5);
    }
    write(1, "0x", 2);
    i += 2;
    ft_putptrhex(ptr);
    i += ft_ptrlen(ptr);
    return (i);    
}
