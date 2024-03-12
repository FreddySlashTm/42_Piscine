/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:59:42 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/06 17:53:19 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	d;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			d = '0' + a / 10;
			ft_putchar(d);
			d = '0' + a % 10;
			ft_putchar(d);
			write(1, " ", 1);
			d = '0' + b / 10;
			ft_putchar(d);
			d = '0' + b % 10;
			ft_putchar(d);
			if (!(a == 98))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
