/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmo-lo <polmo-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:08:47 by polmo-lo          #+#    #+#             */
/*   Updated: 2024/07/31 14:49:41 by polmo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>


int		ft_putchar(int c);
void	ft_putchar_fd(char c, int fd);
int		ft_putstr(char *str);
int		ft_puthex(unsigned int nbr, char *base);
int		ft_putnbr(int nbr);
int		ft_printf(const char *format, ...);
int		ft_putptr(uintptr_t ptr);
int		ft_putunsigned(unsigned int num);
int		ft_strlen(const char *str);

#endif