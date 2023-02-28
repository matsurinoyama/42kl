/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:07:41 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/28 16:24:37 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = power;
	result = nb;
	if (power == 0 || nb == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	while (i > 1)
	{
		result *= nb;
		i--;
	}
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main (int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, 
		"Usage: %s <Base Number> <Exponent Number>\n", argv[0]);
		exit (1);
	}

	printf("%s TO THE POWER OF %s IS: ", argv[1], argv[2]);
	printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}
*/