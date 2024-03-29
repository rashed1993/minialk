/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_libft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:32:10 by ral-dhah          #+#    #+#             */
/*   Updated: 2023/02/09 16:18:12 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	i++;
	return (i);
}

void	ft_putstr(char *s)
{
	if (!s)
		return ;
	else
		write(1, s, ft_strlen(s));
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	int	new_nb;

	if (n == 0)
	{
		ft_putchar(n + 48);
	}
	else if (n > 0)
	{
		new_nb = n / 10;
		if (new_nb != 0)
		{
			ft_putnbr(new_nb);
		}
		ft_putchar(n % 10 + 48);
	}
	else
	{
		ft_putchar('-');
		new_nb = 0 - (n / 10);
		if (new_nb != 0)
		{
			ft_putnbr(new_nb);
		}
		ft_putchar(0 - (n % 10) + 48);
	}
}
