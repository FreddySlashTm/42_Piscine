/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:09:03 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/18 16:09:05 by alcastan         ###   ########.fr       */
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
	int	i;

	i = 1;
	while (argc > 1)
	{
		ft_print_program_name (argv[i]);
		ft_putchar ('\n');
		i++;
		argc--;
	}
}
