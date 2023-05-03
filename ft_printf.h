/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:12:18 by abuchet           #+#    #+#             */
/*   Updated: 2023/02/08 14:36:29 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printchar(int c);
int		ft_formats(va_list args, const char format);
int		ft_printf(const char *str, ...);
int		ft_hexlen(unsigned	int num);
void	ft_puthex(unsigned int num, const char format);
int		ft_printhex(unsigned int num, const char format);
int		ft_ptrlen(unsigned long long num);
void	ft_putptr(unsigned long long num);
int		ft_printptr(unsigned long long ptr);
int		ft_uilen(unsigned	int num);
char	*ft_uitoa(unsigned int n);
int		ft_printui(unsigned int n);
void	ft_putstr(char *str);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printpercent(void);

#endif