/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:07:41 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/28 19:13:04 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	result;
	int	count;

	i = 1;
	count = 0;
	while (i <= nb)
	{
		result = nb % i;
		if (result == 0)
		{
			count++;
		}
		i++;
	}
	if (count == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	while (ft_is_prime(i) != 1)
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main (int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, 
		"Usage: %s <Number>\n", argv[0]);
		exit (1);
	}

	printf("IS %s A PRIME NUMBER?: ", argv[1]);
	if (ft_find_next_prime(atoi(argv[1])) == atoi(argv[1]))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO, BUT THE NEXT NEAREST PRIME NUMBER IS %d\n", 
		ft_find_next_prime(atoi(argv[1])));
	}
}
*/