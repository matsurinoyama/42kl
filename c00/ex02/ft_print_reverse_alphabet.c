/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fad <mbin-fad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:51:42 by mbin-fad          #+#    #+#             */
/*   Updated: 2023/02/10 19:59:22 by mbin-fad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
   	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	c = '{';

	while (c-- > 'a')
		ft_putchar(c);
		ft_putchar('\n');
}
