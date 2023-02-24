/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:37:18 by ral-dhah          #+#    #+#             */
/*   Updated: 2023/02/09 16:21:52 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	parent(int sig)
{
	static int	n;
	static int	bit;

	if (sig == SIGUSR1)
		bit += 1 << (7 - n);
	n++;
	if (n == 8)
	{
		ft_putchar(bit);
		n = 0;
		bit = 0;
	}
}

int	main(void)
{
	ft_putstr("The PID is: ");
	ft_putnbr(getpid());
	ft_putchar('\n');
	signal(SIGUSR1, parent);
	signal(SIGUSR2, parent);
	while (42)
		pause();
}
