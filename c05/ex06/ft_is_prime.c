/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:07:41 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/28 19:09:14 by mbin-fad         ###   ########.fr       */
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
	if (ft_is_prime(atoi(argv[1])) == 1)
	{
		printf("YES (%d)\n", ft_is_prime(atoi(argv[1])));
	}
	else
	{
		printf("NO (%d)\n", ft_is_prime(atoi(argv[1])));
	}
}
*/
