/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:45:41 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/21 14:27:37 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] && i < (n - 1))
	{
		if (s1[i] != s2[i])
		{
			break ;
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main (int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		fprintf(stderr, "Usage: %s <String 1> <String 2> [<Length>]\n", argv[0]);
		exit (1);
	}

	result = ft_strncmp(argv[1], argv[2], atoi(argv[3]));

	if (result > 0)
	{
		printf("%s is greater than %s (%d)\n", argv[1], argv[2], result);
	}
	else if (result < 0)
	{
		printf("%s is less than %s (%d)\n", argv[1], argv[2], result);
	}
	else
	{
		printf("%s is equal to %s\n", argv[1], argv[2]);
	}

	return (0);
}
*/