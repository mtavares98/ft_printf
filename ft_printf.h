/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:19:12 by mtavares          #+#    #+#             */
/*   Updated: 2022/03/13 17:28:56 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef unsigned long long	t_llu;
typedef unsigned int		t_u;
# define HEXUP 				"0123456789ABCDEF"
# define HEXLO 				"0123456789abcdef"
# define DEC				"0123456789"
# define STR				0
# define CHAR				1

int		ft_putstr(char *str, char c, int is_char);
int		ft_putnbr(int n, char *str, int numdig);
int		ft_putllunbr_base(t_llu n, char *str, int base, int numdig);
int		ft_printf(const char *str, ...);

#endif