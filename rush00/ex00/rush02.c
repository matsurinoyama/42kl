/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygoh <ygoh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:35:54 by ygoh              #+#    #+#             */
/*   Updated: 2023/02/12 11:45:35 by ygoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putline(char start, char mid, char end, int columns)
{
	int	midcolumn;

	midcolumn = columns - 2;
	ft_putchar(start);
	while (midcolumn > 1)
	{
		ft_putchar(mid);
		midcolumn--;
	}
	if (columns > 1)
		ft_putchar(end);
}

void	rush(int x, int y)
{
	int	rowsprinted;

	rowsprinted = 0;
	if (x <= 0 || y <= 0 || x > 2147483647 || y > 2147483647)
	{
		write(1, "Invalid input.\n", 15);
	}
	if (x > 0 && y > 0)
	{
		while (rowsprinted < y)
		{
			if (rowsprinted == 0)
				ft_putline('A', 'B', 'A', x);
			else if (rowsprinted == y - 1)
				ft_putline('C', 'B', 'C', x);
			else
				ft_putline('B', ' ', 'B', x);
			rowsprinted++;
			write(1, "\n", 1);
		}
	}
}
