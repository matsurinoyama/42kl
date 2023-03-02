/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:36:12 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/28 19:57:41 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			break ;
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(char **arr, int size)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < size)
	{
		while (i > 0 && ft_strcmp(arr[i - 1], arr[i]) > 0)
		{
			tmp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = tmp;
			i--;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;	

	i = 1;
	ft_sort(argv + 1, argc - 1);
	while (i != argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
