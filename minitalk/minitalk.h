/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:33:57 by ral-dhah          #+#    #+#             */
/*   Updated: 2023/01/22 15:34:59 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>

int					ft_atoi(const char *str);
// static	size_t		ft_strlen(char *s);
void				ft_putstr(char *s);
void				ft_putchar(char c);
void				ft_putnbr(int n);
void				parent(int sig);
void				child(char c, int pid);
#endif