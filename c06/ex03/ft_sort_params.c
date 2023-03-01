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

void	ft_swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_bubble_sort(char **arr, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (ft_strcmp(arr[j], arr[j + 1]) > 0)
				ft_swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;	

	i = 1;
	ft_bubble_sort(argv + 1, argc - 1);
	while (i != argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
