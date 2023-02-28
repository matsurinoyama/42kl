/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:04:02 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/23 12:04:04 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	count;
	int	multi;
	int	num;

	count = 0;
	multi = 1;
	num = 0;
	while ((*str >= '0' && *str <= '9')
		|| *str == '-' || *str == '+' || *str == ' ')
	{
		if (*str == '-')
			multi *= -1;
		while (*str >= '0' && *str <= '9')
		{
			num = (num * 10) + (*str - '0');
			if (*str == ' ')
				break ;
			str++;
			count++;
		}
		if (count >= 1)
			break ;
		str++;
	}
	return (num *= multi);
}

/*
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, 
		"Usage: %s <Number>\n", argv[0]);
		exit (1);
	}

	ft_putnbr(ft_atoi(argv[1]));
}
*/
