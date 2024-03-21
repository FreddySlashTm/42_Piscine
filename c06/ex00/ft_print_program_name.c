/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:55:26 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/19 17:14:10 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_program_name(char *name)
{
	int	i;

	i = 0;
	while (name[i] != '\0')
	{
		ft_putchar (name[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_print_program_name(argv[0]);
		ft_putchar('\n');
	}
	return (0);
}
