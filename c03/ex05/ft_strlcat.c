/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:51:42 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/21 16:31:14 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strsize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strsize(dest);
	j = 0;
	if (size > i)
	{
		while (src[j] != '\0' && j < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	if (size < ft_strsize(dest))
	{
		return (ft_strsize(src) + size);
	}
	else
	{
		return (ft_strsize(dest) + ft_strsize(src));
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		fprintf(stderr, 
		"Usage: %s <Dest. String> <Src. String> [<Src. Length>]\n", argv[0]);
		exit (1);
	}

	printf("BEFORE:\n");
	printf("%s\n", argv[1]);
	printf("\n");

	printf("AFTER:\n");
	printf("(%d) ", ft_strlcat(argv[1], argv[2], atoi (argv[3])));
	printf("%s\n", argv[1]);	

}
*/