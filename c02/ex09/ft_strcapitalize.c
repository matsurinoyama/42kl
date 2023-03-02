/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:52:50 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/16 15:30:07 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0
				|| str[i - 1] == ' ' || str[i - 1] == '+'
				|| str[i - 1] == '-'))
		{
			str[i] = (str[i] - 32);
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !(i == 0
				|| str[i - 1] == ' ' || str[i - 1] == '+'
				|| str[i - 1] == '-'))
		{
			str[i] = (str[i] + 32);
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <String>\n", argv[0]);
		exit (1);
	}

	printf("BEFORE:\n");
	printf("%s\n", argv[1]);
	printf("\n");

	printf("AFTER:\n");
	printf("%s\n", ft_strcapitalize(argv[1]));
}
*/