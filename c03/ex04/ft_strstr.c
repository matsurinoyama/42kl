/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:01:37 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/21 17:01:39 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int l;
	int	scan;
	int count;
	int	print;

	i = 0;
	j = 0;
	l = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	while (str[j] != '\0')
	{
		if (str[j] == to_find[0])
		{
			scan = 0;
			while (scan < i)
			{
				count = 0;
				if (str[j] == str[i])
				{
					count++;
					//j++;
				}
				scan++;
			}
		}
		j++;
	}
	if (count == i)
	{
		print = i - j;
		while (str[print] != '\0')
		{
			str[l]
			l++;
			print++;
		}
	}
	str[print] = '\0';
	return (str);
}


#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <str. String> <to_find. String>\n", argv[0]);
		exit (1);
	}

	printf("BEFORE:\n");
	printf("%s\n", argv[1]);
	printf("\n");

	printf("AFTER:\n");
	printf("%s\n", ft_strstr(argv[1], argv[2]));
	return (0);	
}
